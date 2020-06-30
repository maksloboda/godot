/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "textreme_text_edit.h"

void register_textreme_types() {
    ClassDB::register_class<Textreme::TextremeTextEdit>();
}

void unregister_textreme_types() {
}
