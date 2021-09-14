#include "ref.h"

namespace scriplib {

	Reference::Reference(Book book, refnum_t chapter, refnum_t verse) {
		_book = book;
		_chapter = chapter;
		_verse = verse;
	}

	Book Reference::getBook() const {
		return _book;
	}

	refnum_t Reference::getChapter() const {
		return _chapter;
	}

	refnum_t Reference::getVerse() const {
		return _verse;
	}
}
