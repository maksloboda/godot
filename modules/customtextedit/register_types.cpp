/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "custom_text_edit.h"

void register_customtextedit_types() {
    ClassDB::register_class<Internal::CustomTextEdit>();
}

void unregister_customtextedit_types() {
}
