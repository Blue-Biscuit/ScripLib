#pragma once

namespace scriplib {
	/**
	* Integer type for chapter/verse numbers.
	*
	* Date Created: August 14, 2021
	* Author: Andrew Huffman
	*/
	typedef unsigned char refnum_t;

	/**
	* An enumeration for all the books of
	* Scripture.
	*
	* Date Created: August 14, 2021
	* Author: Andrew Huffman
	*/
	enum class Book {
		// Torah
		Genesis,
		Exodus,
		Leviticus,
		Numbers,
		Deuteronomy,

		// History
		Joshua,
		Judges,
		Ruth,
		Samuel1,
		Samuel2,
		Kings1,
		Kings2,
		Chronicles1,
		Chronicles2,
		Ezra,
		Nehemiah,
		Esther,

		// Wisdom
		Job,
		Psalms,
		Proverbs,
		Ecclesiastes,
		SongOfSongs,
		
		// Prophets
		Isaiah,
		Jeremiah,
		Lamentations,
		Ezekiel,
		Daniel,
		Hosea,
		Joel,
		Amos,
		Obadiah,
		Jonah,
		Micah,
		Nahum,
		Habakkuk,
		Zephaniah,
		Haggai,
		Zechariah,
		Malachi,

		// Gospels
		Matthew,
		Mark,
		Luke,
		John,

		// NT History
		Acts,
		
		// Epistles
		Romans,
		Corinthians1,
		Corinthians2,
		Galatians,
		Ephesians,
		Philippians,
		Colossians,
		Thessalonians1,
		Thessalonians2,
		Timothy1,
		Timothy2,
		Titus,
		Philemon,
		Hebrews,
		James,
		Peter1,
		Peter2,
		John1,
		John2,
		John3,
		Jude,

		// Apocalyptic
		Revelation
	};

	/**
	* An immutable Scripture reference.
	*
	* Date Created: August 14, 2021
	* Author: Andrew Huffman
	*/
	class Reference {
	public:
		Reference(Book book, refnum_t chapter, refnum_t verse);

		Book getBook() const;
		refnum_t getChapter() const;
		refnum_t getVerse() const;		

	private:
		Book _book;
		refnum_t _chapter;
		refnum_t _verse;
	};

}
