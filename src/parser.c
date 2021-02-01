#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  sym__reverse_atom = 3,
  aux_sym_alias_token1 = 4,
  aux_sym_alias_token2 = 5,
  sym_string = 6,
  anon_sym_LT_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT_GT = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_DASH = 11,
  anon_sym_big = 12,
  anon_sym_binary = 13,
  anon_sym_bits = 14,
  anon_sym_bitstring = 15,
  anon_sym_bytes = 16,
  anon_sym_float = 17,
  anon_sym_integer = 18,
  anon_sym_little = 19,
  anon_sym_native = 20,
  anon_sym_signed = 21,
  anon_sym_unsigned = 22,
  anon_sym_utf16 = 23,
  anon_sym_utf32 = 24,
  anon_sym_utf8 = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  anon_sym_COLONtrue = 28,
  anon_sym_COLONfalse = 29,
  anon_sym_COLON_SQUOTEtrue_SQUOTE = 30,
  anon_sym_COLON_SQUOTEfalse_SQUOTE = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_PERCENT = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_EQ_GT = 37,
  sym_sigil = 38,
  sym_variable = 39,
  sym_identifier = 40,
  anon_sym_defmodule = 41,
  anon_sym_AT = 42,
  anon_sym_def = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_defp = 46,
  anon_sym_do = 47,
  anon_sym_end = 48,
  anon_sym_COMMAdo_COLON = 49,
  anon_sym_EQ = 50,
  anon_sym_DOT = 51,
  anon_sym_for = 52,
  anon_sym_LT_DASH = 53,
  sym_source_file = 54,
  sym_alias = 55,
  sym_binary_string = 56,
  sym_bin_part = 57,
  sym_bin_type_list = 58,
  sym_bin_type = 59,
  sym_boolean = 60,
  sym_list = 61,
  sym_map = 62,
  sym_map_entry = 63,
  sym_struct = 64,
  sym_struct_entry = 65,
  sym_tuple = 66,
  sym__trailing_comma_separator_elements = 67,
  sym_expression = 68,
  sym__term = 69,
  sym_defmodule = 70,
  sym_module_attribute = 71,
  sym_def = 72,
  sym_defp = 73,
  sym_do_block = 74,
  sym_match = 75,
  sym_function_call = 76,
  sym__function_name = 77,
  sym_qualified_function_name = 78,
  sym_computed_function_name = 79,
  sym_for_list_comprehension = 80,
  sym_for_list_generator = 81,
  sym_for_list_filter = 82,
  sym_for_bitstring_generator = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_alias_repeat1 = 85,
  aux_sym_binary_string_repeat1 = 86,
  aux_sym_bin_type_list_repeat1 = 87,
  aux_sym_map_repeat1 = 88,
  aux_sym_struct_repeat1 = 89,
  aux_sym__trailing_comma_separator_elements_repeat1 = 90,
  aux_sym_def_repeat1 = 91,
  aux_sym_function_call_repeat1 = 92,
  anon_alias_sym_size = 93,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym__reverse_atom] = "atom",
  [aux_sym_alias_token1] = "alias_token1",
  [aux_sym_alias_token2] = "alias_token2",
  [sym_string] = "string",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH] = "-",
  [anon_sym_big] = "big",
  [anon_sym_binary] = "binary",
  [anon_sym_bits] = "bits",
  [anon_sym_bitstring] = "bitstring",
  [anon_sym_bytes] = "bytes",
  [anon_sym_float] = "float",
  [anon_sym_integer] = "integer",
  [anon_sym_little] = "little",
  [anon_sym_native] = "native",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_utf16] = "utf16",
  [anon_sym_utf32] = "utf32",
  [anon_sym_utf8] = "utf8",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLONtrue] = ":true",
  [anon_sym_COLONfalse] = ":false",
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ":'true'",
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ":'false'",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [sym_sigil] = "sigil",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_AT] = "@",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defp] = "defp",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_COMMAdo_COLON] = ", do:",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_for] = "for",
  [anon_sym_LT_DASH] = "<-",
  [sym_source_file] = "source_file",
  [sym_alias] = "alias",
  [sym_binary_string] = "binary_string",
  [sym_bin_part] = "bin_part",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_map_entry] = "map_entry",
  [sym_struct] = "struct",
  [sym_struct_entry] = "struct_entry",
  [sym_tuple] = "tuple",
  [sym__trailing_comma_separator_elements] = "_trailing_comma_separator_elements",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_defmodule] = "defmodule",
  [sym_module_attribute] = "module_attribute",
  [sym_def] = "def",
  [sym_defp] = "defp",
  [sym_do_block] = "do_block",
  [sym_match] = "match",
  [sym_function_call] = "function_call",
  [sym__function_name] = "_function_name",
  [sym_qualified_function_name] = "qualified_function_name",
  [sym_computed_function_name] = "computed_function_name",
  [sym_for_list_comprehension] = "for_list_comprehension",
  [sym_for_list_generator] = "for_list_generator",
  [sym_for_list_filter] = "for_list_filter",
  [sym_for_bitstring_generator] = "for_bitstring_generator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_alias_repeat1] = "alias_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [anon_alias_sym_size] = "size",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym__reverse_atom] = sym_atom,
  [aux_sym_alias_token1] = aux_sym_alias_token1,
  [aux_sym_alias_token2] = aux_sym_alias_token2,
  [sym_string] = sym_string,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_big] = anon_sym_big,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bitstring] = anon_sym_bitstring,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_little] = anon_sym_little,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLONtrue] = anon_sym_COLONtrue,
  [anon_sym_COLONfalse] = anon_sym_COLONfalse,
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = anon_sym_COLON_SQUOTEtrue_SQUOTE,
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = anon_sym_COLON_SQUOTEfalse_SQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_sigil] = sym_sigil,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_defmodule] = anon_sym_defmodule,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defp] = anon_sym_defp,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMAdo_COLON] = anon_sym_COMMAdo_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [sym_source_file] = sym_source_file,
  [sym_alias] = sym_alias,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_part] = sym_bin_part,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_map_entry] = sym_map_entry,
  [sym_struct] = sym_struct,
  [sym_struct_entry] = sym_struct_entry,
  [sym_tuple] = sym_tuple,
  [sym__trailing_comma_separator_elements] = sym__trailing_comma_separator_elements,
  [sym_expression] = sym_expression,
  [sym__term] = sym__term,
  [sym_defmodule] = sym_defmodule,
  [sym_module_attribute] = sym_module_attribute,
  [sym_def] = sym_def,
  [sym_defp] = sym_defp,
  [sym_do_block] = sym_do_block,
  [sym_match] = sym_match,
  [sym_function_call] = sym_function_call,
  [sym__function_name] = sym__function_name,
  [sym_qualified_function_name] = sym_qualified_function_name,
  [sym_computed_function_name] = sym_computed_function_name,
  [sym_for_list_comprehension] = sym_for_list_comprehension,
  [sym_for_list_generator] = sym_for_list_generator,
  [sym_for_list_filter] = sym_for_list_filter,
  [sym_for_bitstring_generator] = sym_for_bitstring_generator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_alias_repeat1] = aux_sym_alias_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym__trailing_comma_separator_elements_repeat1] = aux_sym__trailing_comma_separator_elements_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [anon_alias_sym_size] = anon_alias_sym_size,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__reverse_atom] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_big] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_little] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfalse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_sigil] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAdo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_part] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__trailing_comma_separator_elements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_module_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_defp] = {
    .visible = true,
    .named = true,
  },
  [sym_do_block] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_computed_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_for_list_comprehension] = {
    .visible = true,
    .named = true,
  },
  [sym_for_list_generator] = {
    .visible = true,
    .named = true,
  },
  [sym_for_list_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_for_bitstring_generator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__trailing_comma_separator_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_size] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_function_name = 2,
  field_module_name = 3,
  field_modulename = 4,
  field_name = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function_name] = "function_name",
  [field_module_name] = "module_name",
  [field_modulename] = "modulename",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 4},
  [9] = {.index = 20, .length = 5},
  [10] = {.index = 25, .length = 3},
  [11] = {.index = 28, .length = 4},
  [12] = {.index = 32, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 2},
    {field_module_name, 0},
  [2] =
    {field_modulename, 1},
  [3] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_name, 0},
  [6] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [10] =
    {field_function_name, 2},
    {field_function_name, 3},
    {field_function_name, 4},
    {field_module_name, 0},
  [14] =
    {field_arguments, 2},
    {field_arguments, 3},
  [16] =
    {field_function_name, 4},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
  [20] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_name, 0},
  [25] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [28] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
  [32] =
    {field_function_name, 4},
    {field_function_name, 5},
    {field_function_name, 6},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = anon_alias_sym_size,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(179);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(190);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '~') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(190);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '~') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(153);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(190);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '~') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(49);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(154);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(49);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(316);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '|') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 26:
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 32:
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '<') ADVANCE(228);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(217);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '8') ADVANCE(249);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(248);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(247);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(190);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(315);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '^') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == '<') ADVANCE(228);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '~') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '~') ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '~') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '^') ADVANCE(190);
      END_STATE();
    case 72:
      if (lookahead == '^') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 131:
      if (lookahead == '|') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '~') ADVANCE(190);
      END_STATE();
    case 134:
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 147:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 148:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 150:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(190);
      END_STATE();
    case 158:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(49);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '~') ADVANCE(54);
      END_STATE();
    case 160:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '~') ADVANCE(54);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 168:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(227);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(278);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(173);
      END_STATE();
    case 175:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(280);
      END_STATE();
    case 176:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(176);
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == ')') ADVANCE(310);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(302);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == '_') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '_') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(190);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '~') ADVANCE(190);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == '|') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(71);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(190);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(190);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '~') ADVANCE(202);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(49);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(190);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '"') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '"') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(177);
      if (lookahead == '\'') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(177);
      if (lookahead == '\'') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_defp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(265);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(302);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 178},
  [2] = {.lex_state = 178},
  [3] = {.lex_state = 178},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 178},
  [28] = {.lex_state = 178},
  [29] = {.lex_state = 178},
  [30] = {.lex_state = 178},
  [31] = {.lex_state = 178},
  [32] = {.lex_state = 178},
  [33] = {.lex_state = 178},
  [34] = {.lex_state = 178},
  [35] = {.lex_state = 178},
  [36] = {.lex_state = 178},
  [37] = {.lex_state = 178},
  [38] = {.lex_state = 178},
  [39] = {.lex_state = 178},
  [40] = {.lex_state = 178},
  [41] = {.lex_state = 178},
  [42] = {.lex_state = 178},
  [43] = {.lex_state = 178},
  [44] = {.lex_state = 178},
  [45] = {.lex_state = 178},
  [46] = {.lex_state = 178},
  [47] = {.lex_state = 178},
  [48] = {.lex_state = 178},
  [49] = {.lex_state = 178},
  [50] = {.lex_state = 178},
  [51] = {.lex_state = 178},
  [52] = {.lex_state = 178},
  [53] = {.lex_state = 178},
  [54] = {.lex_state = 178},
  [55] = {.lex_state = 178},
  [56] = {.lex_state = 178},
  [57] = {.lex_state = 178},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 178},
  [62] = {.lex_state = 178},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 178},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 178},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 178},
  [130] = {.lex_state = 178},
  [131] = {.lex_state = 178},
  [132] = {.lex_state = 178},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 178},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 178},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 178},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 178},
  [145] = {.lex_state = 178},
  [146] = {.lex_state = 178},
  [147] = {.lex_state = 178},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 178},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 178},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 178},
  [158] = {.lex_state = 130},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 178},
  [161] = {.lex_state = 130},
  [162] = {.lex_state = 178},
  [163] = {.lex_state = 178},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 178},
  [167] = {.lex_state = 130},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 178},
  [170] = {.lex_state = 178},
  [171] = {.lex_state = 178},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 178},
  [174] = {.lex_state = 178},
  [175] = {.lex_state = 178},
  [176] = {.lex_state = 178},
  [177] = {.lex_state = 178},
  [178] = {.lex_state = 178},
  [179] = {.lex_state = 178},
  [180] = {.lex_state = 178},
  [181] = {.lex_state = 178},
  [182] = {.lex_state = 178},
  [183] = {.lex_state = 178},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 178},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 178},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 178},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 178},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 58},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 58},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 178},
  [203] = {.lex_state = 178},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 178},
  [211] = {.lex_state = 178},
  [212] = {.lex_state = 178},
  [213] = {.lex_state = 178},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 58},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 178},
  [218] = {.lex_state = 58},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 58},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 58},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 58},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 29},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [aux_sym_alias_token1] = ACTIONS(1),
    [aux_sym_alias_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLONtrue] = ACTIONS(1),
    [anon_sym_COLONfalse] = ACTIONS(1),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_sigil] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_COMMAdo_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(225),
    [sym_alias] = STATE(228),
    [sym_binary_string] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_list] = STATE(46),
    [sym_map] = STATE(46),
    [sym_struct] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym_expression] = STATE(62),
    [sym_defmodule] = STATE(3),
    [sym_module_attribute] = STATE(46),
    [sym_def] = STATE(46),
    [sym_defp] = STATE(46),
    [sym_match] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym__function_name] = STATE(232),
    [sym_qualified_function_name] = STATE(232),
    [sym_computed_function_name] = STATE(232),
    [sym_for_list_comprehension] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [aux_sym_alias_token1] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_COLONfalse] = ACTIONS(13),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(15),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_sigil] = ACTIONS(5),
    [sym_variable] = ACTIONS(23),
    [anon_sym_defmodule] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_def] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_defp] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_atom,
    ACTIONS(45), 1,
      aux_sym_alias_token1,
    ACTIONS(48), 1,
      anon_sym_LT_LT,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_PERCENT,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      sym_variable,
    ACTIONS(69), 1,
      anon_sym_defmodule,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(75), 1,
      anon_sym_def,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_defp,
    ACTIONS(84), 1,
      anon_sym_for,
    STATE(62), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(54), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(51), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [87] = 22,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(25), 1,
      anon_sym_defmodule,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [174] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(89), 1,
      anon_sym_LT_LT,
    STATE(199), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(120), 2,
      sym_for_list_generator,
      sym_for_bitstring_generator,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [255] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(89), 1,
      anon_sym_LT_LT,
    STATE(199), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(125), 2,
      sym_for_list_generator,
      sym_for_bitstring_generator,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [336] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(115), 1,
      anon_sym_end,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(209), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [416] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [496] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [576] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(105), 1,
      sym_expression,
    STATE(168), 1,
      sym_for_list_filter,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [656] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(105), 1,
      sym_expression,
    STATE(185), 1,
      sym_for_list_filter,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [736] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    ACTIONS(123), 1,
      anon_sym_end,
    STATE(216), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [816] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(47), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [893] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(56), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [970] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(94), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1047] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(117), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1124] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(123), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1201] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(201), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1278] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(132), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1355] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(115), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1432] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_atom,
    ACTIONS(95), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(113), 1,
      anon_sym_defp,
    ACTIONS(117), 1,
      anon_sym_for,
    STATE(143), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(99), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(91), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(239), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(97), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(99), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1509] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(61), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1586] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(51), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1663] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(197), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1740] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(196), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1817] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      anon_sym_for,
    STATE(171), 1,
      sym_expression,
    STATE(228), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
      sym_for_list_comprehension,
  [1894] = 2,
    ACTIONS(127), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(125), 20,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [1930] = 2,
    ACTIONS(131), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(129), 20,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [1966] = 2,
    ACTIONS(135), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(133), 20,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2002] = 2,
    ACTIONS(139), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(137), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2037] = 2,
    ACTIONS(143), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(141), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2072] = 2,
    ACTIONS(147), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(145), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2107] = 2,
    ACTIONS(151), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(149), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2142] = 2,
    ACTIONS(155), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(153), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2177] = 2,
    ACTIONS(159), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(157), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2212] = 2,
    ACTIONS(163), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(161), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2247] = 2,
    ACTIONS(167), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(165), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2282] = 2,
    ACTIONS(171), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(169), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2317] = 2,
    ACTIONS(175), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(173), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2352] = 2,
    ACTIONS(179), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(177), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2387] = 2,
    ACTIONS(183), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(181), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2422] = 2,
    ACTIONS(187), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(185), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2457] = 2,
    ACTIONS(191), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(189), 19,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2492] = 4,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(195), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(193), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2531] = 2,
    ACTIONS(203), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2565] = 2,
    ACTIONS(207), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(205), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2599] = 2,
    ACTIONS(195), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(193), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2633] = 2,
    ACTIONS(211), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2667] = 3,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(193), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2703] = 2,
    ACTIONS(215), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(213), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2737] = 2,
    ACTIONS(211), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2771] = 3,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(219), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_for,
    ACTIONS(217), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2807] = 2,
    ACTIONS(225), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(223), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2841] = 2,
    ACTIONS(229), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(227), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2875] = 2,
    ACTIONS(233), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(231), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2909] = 2,
    ACTIONS(237), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(235), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2943] = 2,
    ACTIONS(241), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(239), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [2977] = 2,
    ACTIONS(245), 11,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_for,
    ACTIONS(243), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
  [3011] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      sym_atom,
    ACTIONS(251), 1,
      sym__reverse_atom,
    ACTIONS(253), 1,
      anon_sym_LT_LT,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(147), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(247), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(234), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3064] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      sym_atom,
    ACTIONS(251), 1,
      sym__reverse_atom,
    ACTIONS(253), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(247), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(234), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3117] = 12,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      sym_atom,
    ACTIONS(251), 1,
      sym__reverse_atom,
    ACTIONS(253), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_AT,
    STATE(211), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(247), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(234), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3167] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(211), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_for,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [3198] = 3,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(265), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_for,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [3229] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(269), 2,
      sym_atom,
      sym_variable,
    ACTIONS(267), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(129), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3275] = 2,
    ACTIONS(275), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_for,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [3303] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(269), 2,
      sym_atom,
      sym_variable,
    ACTIONS(267), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(129), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3349] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      sym_atom,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(279), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(203), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3393] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(285), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(210), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3437] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(291), 2,
      sym_atom,
      sym_variable,
    ACTIONS(293), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(289), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(166), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3481] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(269), 2,
      sym_atom,
      sym_variable,
    ACTIONS(267), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(129), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3527] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(269), 2,
      sym_atom,
      sym_variable,
    ACTIONS(267), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(129), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3573] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(291), 2,
      sym_atom,
      sym_variable,
    ACTIONS(299), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(289), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(166), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3617] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(303), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(301), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(212), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3661] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(305), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(202), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [3705] = 9,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(291), 2,
      sym_atom,
      sym_variable,
    ACTIONS(289), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(166), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3745] = 4,
    ACTIONS(309), 1,
      sym_number,
    ACTIONS(313), 1,
      anon_sym_bits,
    STATE(91), 1,
      sym_bin_type,
    ACTIONS(311), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [3770] = 4,
    ACTIONS(309), 1,
      sym_number,
    ACTIONS(313), 1,
      anon_sym_bits,
    STATE(139), 1,
      sym_bin_type,
    ACTIONS(311), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [3795] = 8,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_atom,
    ACTIONS(317), 1,
      sym_variable,
    STATE(228), 1,
      sym_alias,
    STATE(219), 2,
      sym_binary_string,
      sym_function_call,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
  [3823] = 8,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_atom,
    ACTIONS(319), 1,
      sym_variable,
    STATE(228), 1,
      sym_alias,
    STATE(230), 2,
      sym_binary_string,
      sym_function_call,
    STATE(232), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
  [3851] = 4,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(193), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3867] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3880] = 2,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(161), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3890] = 2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(231), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3900] = 2,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(227), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3910] = 2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(235), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3920] = 2,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(189), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3930] = 2,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(149), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3940] = 2,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(177), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3950] = 2,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(141), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3960] = 2,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(145), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3970] = 2,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(129), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3980] = 3,
    ACTIONS(323), 1,
      anon_sym_DASH,
    STATE(112), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [3992] = 2,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(133), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4002] = 3,
    ACTIONS(327), 1,
      anon_sym_GT_GT,
    STATE(176), 1,
      sym_bin_part,
    ACTIONS(325), 3,
      sym_number,
      sym_string,
      sym_variable,
  [4014] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(217), 3,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
  [4026] = 2,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(181), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4036] = 2,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(125), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4046] = 2,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(137), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4056] = 2,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(153), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4066] = 2,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(193), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4076] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(209), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4086] = 2,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(157), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4096] = 2,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(185), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4106] = 3,
    ACTIONS(327), 1,
      anon_sym_GT_GT,
    STATE(130), 1,
      sym_bin_part,
    ACTIONS(325), 3,
      sym_number,
      sym_string,
      sym_variable,
  [4118] = 3,
    ACTIONS(333), 1,
      anon_sym_DASH,
    STATE(104), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(331), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4130] = 4,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(338), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4144] = 2,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(165), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4154] = 2,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(205), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4164] = 2,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(243), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4174] = 2,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(223), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4184] = 2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(169), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4194] = 2,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(173), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4204] = 3,
    ACTIONS(323), 1,
      anon_sym_DASH,
    STATE(104), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(340), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4216] = 2,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(213), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4226] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(201), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4236] = 2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(239), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4246] = 3,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    STATE(183), 1,
      sym_bin_type_list,
    ACTIONS(342), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4258] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(209), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4268] = 3,
    ACTIONS(346), 1,
      anon_sym_GT_GT,
    STATE(162), 1,
      sym_bin_part,
    ACTIONS(325), 3,
      sym_number,
      sym_string,
      sym_variable,
  [4280] = 4,
    ACTIONS(348), 1,
      sym_atom,
    ACTIONS(350), 1,
      sym__reverse_atom,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym_struct_entry,
  [4293] = 4,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(83), 1,
      sym_do_block,
  [4306] = 3,
    ACTIONS(360), 1,
      aux_sym_alias_token2,
    STATE(138), 1,
      aux_sym_alias_repeat1,
    ACTIONS(362), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4317] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(367), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4328] = 3,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(367), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4339] = 4,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(55), 1,
      sym_do_block,
  [4352] = 4,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_do_block,
  [4365] = 2,
    STATE(169), 1,
      sym_bin_part,
    ACTIONS(325), 3,
      sym_number,
      sym_string,
      sym_variable,
  [4374] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(293), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4385] = 3,
    ACTIONS(381), 1,
      aux_sym_alias_token2,
    STATE(128), 1,
      aux_sym_alias_repeat1,
    ACTIONS(384), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4396] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(388), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4407] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_GT_GT,
    ACTIONS(394), 1,
      anon_sym_LT_DASH,
    STATE(144), 1,
      aux_sym_binary_string_repeat1,
  [4420] = 4,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
  [4433] = 2,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [4442] = 1,
    ACTIONS(400), 4,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
      anon_sym_LT_DASH,
  [4449] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(402), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4460] = 4,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_function_call_repeat1,
  [4473] = 1,
    ACTIONS(406), 4,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
      anon_sym_LT_DASH,
  [4480] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
    ACTIONS(411), 2,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4491] = 3,
    ACTIONS(413), 1,
      aux_sym_alias_token2,
    STATE(128), 1,
      aux_sym_alias_repeat1,
    ACTIONS(415), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4502] = 1,
    ACTIONS(331), 4,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
      anon_sym_LT_DASH,
  [4509] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(420), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4520] = 4,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_do_block,
  [4533] = 4,
    ACTIONS(348), 1,
      sym_atom,
    ACTIONS(350), 1,
      sym__reverse_atom,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_struct_entry,
  [4546] = 3,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(428), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4557] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_GT_GT,
    ACTIONS(432), 1,
      anon_sym_LT_DASH,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [4570] = 3,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4580] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4590] = 3,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_map_repeat1,
  [4600] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(44), 1,
      sym_do_block,
  [4610] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_def_repeat1,
  [4620] = 3,
    ACTIONS(348), 1,
      sym_atom,
    ACTIONS(350), 1,
      sym__reverse_atom,
    STATE(213), 1,
      sym_struct_entry,
  [4630] = 2,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4638] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_GT_GT,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [4648] = 2,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 2,
      sym_atom,
      sym_variable,
  [4656] = 3,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(82), 1,
      sym_do_block,
  [4666] = 2,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4674] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(57), 1,
      sym_do_block,
  [4684] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_def_repeat1,
  [4694] = 3,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      aux_sym_alias_token2,
    STATE(161), 1,
      aux_sym_alias_repeat1,
  [4704] = 3,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      aux_sym_alias_token2,
    STATE(172), 1,
      aux_sym_alias_repeat1,
  [4714] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_struct_repeat1,
  [4724] = 3,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      aux_sym_alias_token2,
    STATE(167), 1,
      aux_sym_alias_repeat1,
  [4734] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_GT_GT,
    STATE(152), 1,
      aux_sym_binary_string_repeat1,
  [4744] = 3,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_map_repeat1,
  [4754] = 2,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 2,
      sym_atom,
      sym_variable,
  [4762] = 3,
    ACTIONS(484), 1,
      sym_atom,
    ACTIONS(486), 1,
      aux_sym_alias_token1,
    STATE(192), 1,
      sym_alias,
  [4772] = 1,
    ACTIONS(420), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4778] = 3,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      aux_sym_alias_token2,
    STATE(167), 1,
      aux_sym_alias_repeat1,
  [4788] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(52), 1,
      sym_do_block,
  [4798] = 1,
    ACTIONS(411), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4804] = 3,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_struct_repeat1,
  [4814] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4822] = 3,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(496), 1,
      aux_sym_alias_token2,
    STATE(186), 1,
      aux_sym_alias_repeat1,
  [4832] = 3,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_map_repeat1,
  [4842] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      aux_sym_struct_repeat1,
  [4852] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_def_repeat1,
  [4862] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_GT_GT,
    STATE(181), 1,
      aux_sym_binary_string_repeat1,
  [4872] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4882] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_map_repeat1,
  [4892] = 3,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      aux_sym_map_repeat1,
  [4902] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_struct_repeat1,
  [4912] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_GT_GT,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [4922] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_def_repeat1,
  [4932] = 1,
    ACTIONS(517), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_LT_DASH,
  [4938] = 3,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(108), 1,
      sym_do_block,
  [4948] = 3,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(109), 1,
      sym_do_block,
  [4958] = 3,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(519), 1,
      aux_sym_alias_token2,
    STATE(186), 1,
      aux_sym_alias_repeat1,
  [4968] = 3,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_def_repeat1,
  [4978] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(54), 1,
      sym_do_block,
  [4988] = 3,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(113), 1,
      sym_do_block,
  [4998] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(375), 1,
      anon_sym_COMMAdo_COLON,
    STATE(49), 1,
      sym_do_block,
  [5008] = 3,
    ACTIONS(524), 1,
      aux_sym_alias_token1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym_alias,
  [5018] = 3,
    ACTIONS(373), 1,
      anon_sym_do,
    ACTIONS(528), 1,
      anon_sym_COMMAdo_COLON,
    STATE(64), 1,
      sym_do_block,
  [5028] = 3,
    ACTIONS(524), 1,
      aux_sym_alias_token1,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_alias,
  [5038] = 3,
    ACTIONS(356), 1,
      anon_sym_do,
    ACTIONS(358), 1,
      anon_sym_COMMAdo_COLON,
    STATE(114), 1,
      sym_do_block,
  [5048] = 3,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      aux_sym_struct_repeat1,
  [5058] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [5065] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [5072] = 1,
    ACTIONS(538), 2,
      sym_atom,
      sym_identifier,
  [5077] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(540), 1,
      anon_sym_LT_DASH,
  [5084] = 1,
    ACTIONS(542), 2,
      sym_atom,
      sym_identifier,
  [5089] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [5096] = 1,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5101] = 1,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5106] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_DOT,
  [5113] = 2,
    ACTIONS(550), 1,
      sym_variable,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [5120] = 2,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_DOT,
  [5127] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(558), 1,
      anon_sym_GT_GT,
  [5134] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_GT_GT,
  [5141] = 2,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(562), 1,
      anon_sym_end,
  [5148] = 1,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5153] = 1,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5158] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5163] = 1,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5168] = 2,
    ACTIONS(568), 1,
      sym_variable,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [5175] = 1,
    ACTIONS(572), 2,
      sym_atom,
      sym_identifier,
  [5180] = 2,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(574), 1,
      anon_sym_end,
  [5187] = 1,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5192] = 1,
    ACTIONS(576), 2,
      sym_atom,
      sym_identifier,
  [5197] = 1,
    ACTIONS(558), 1,
      anon_sym_GT_GT,
  [5201] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [5205] = 1,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [5209] = 1,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [5213] = 1,
    ACTIONS(584), 1,
      sym_identifier,
  [5217] = 1,
    ACTIONS(586), 1,
      anon_sym_EQ_GT,
  [5221] = 1,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
  [5225] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [5229] = 1,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
  [5233] = 1,
    ACTIONS(199), 1,
      anon_sym_DOT,
  [5237] = 1,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
  [5241] = 1,
    ACTIONS(560), 1,
      anon_sym_GT_GT,
  [5245] = 1,
    ACTIONS(596), 1,
      sym_identifier,
  [5249] = 1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [5253] = 1,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
  [5257] = 1,
    ACTIONS(602), 1,
      anon_sym_EQ_GT,
  [5261] = 1,
    ACTIONS(604), 1,
      sym_identifier,
  [5265] = 1,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [5269] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
  [5273] = 1,
    ACTIONS(610), 1,
      sym_variable,
  [5277] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [5281] = 1,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 416,
  [SMALL_STATE(8)] = 496,
  [SMALL_STATE(9)] = 576,
  [SMALL_STATE(10)] = 656,
  [SMALL_STATE(11)] = 736,
  [SMALL_STATE(12)] = 816,
  [SMALL_STATE(13)] = 893,
  [SMALL_STATE(14)] = 970,
  [SMALL_STATE(15)] = 1047,
  [SMALL_STATE(16)] = 1124,
  [SMALL_STATE(17)] = 1201,
  [SMALL_STATE(18)] = 1278,
  [SMALL_STATE(19)] = 1355,
  [SMALL_STATE(20)] = 1432,
  [SMALL_STATE(21)] = 1509,
  [SMALL_STATE(22)] = 1586,
  [SMALL_STATE(23)] = 1663,
  [SMALL_STATE(24)] = 1740,
  [SMALL_STATE(25)] = 1817,
  [SMALL_STATE(26)] = 1894,
  [SMALL_STATE(27)] = 1930,
  [SMALL_STATE(28)] = 1966,
  [SMALL_STATE(29)] = 2002,
  [SMALL_STATE(30)] = 2037,
  [SMALL_STATE(31)] = 2072,
  [SMALL_STATE(32)] = 2107,
  [SMALL_STATE(33)] = 2142,
  [SMALL_STATE(34)] = 2177,
  [SMALL_STATE(35)] = 2212,
  [SMALL_STATE(36)] = 2247,
  [SMALL_STATE(37)] = 2282,
  [SMALL_STATE(38)] = 2317,
  [SMALL_STATE(39)] = 2352,
  [SMALL_STATE(40)] = 2387,
  [SMALL_STATE(41)] = 2422,
  [SMALL_STATE(42)] = 2457,
  [SMALL_STATE(43)] = 2492,
  [SMALL_STATE(44)] = 2531,
  [SMALL_STATE(45)] = 2565,
  [SMALL_STATE(46)] = 2599,
  [SMALL_STATE(47)] = 2633,
  [SMALL_STATE(48)] = 2667,
  [SMALL_STATE(49)] = 2703,
  [SMALL_STATE(50)] = 2737,
  [SMALL_STATE(51)] = 2771,
  [SMALL_STATE(52)] = 2807,
  [SMALL_STATE(53)] = 2841,
  [SMALL_STATE(54)] = 2875,
  [SMALL_STATE(55)] = 2909,
  [SMALL_STATE(56)] = 2943,
  [SMALL_STATE(57)] = 2977,
  [SMALL_STATE(58)] = 3011,
  [SMALL_STATE(59)] = 3064,
  [SMALL_STATE(60)] = 3117,
  [SMALL_STATE(61)] = 3167,
  [SMALL_STATE(62)] = 3198,
  [SMALL_STATE(63)] = 3229,
  [SMALL_STATE(64)] = 3275,
  [SMALL_STATE(65)] = 3303,
  [SMALL_STATE(66)] = 3349,
  [SMALL_STATE(67)] = 3393,
  [SMALL_STATE(68)] = 3437,
  [SMALL_STATE(69)] = 3481,
  [SMALL_STATE(70)] = 3527,
  [SMALL_STATE(71)] = 3573,
  [SMALL_STATE(72)] = 3617,
  [SMALL_STATE(73)] = 3661,
  [SMALL_STATE(74)] = 3705,
  [SMALL_STATE(75)] = 3745,
  [SMALL_STATE(76)] = 3770,
  [SMALL_STATE(77)] = 3795,
  [SMALL_STATE(78)] = 3823,
  [SMALL_STATE(79)] = 3851,
  [SMALL_STATE(80)] = 3867,
  [SMALL_STATE(81)] = 3880,
  [SMALL_STATE(82)] = 3890,
  [SMALL_STATE(83)] = 3900,
  [SMALL_STATE(84)] = 3910,
  [SMALL_STATE(85)] = 3920,
  [SMALL_STATE(86)] = 3930,
  [SMALL_STATE(87)] = 3940,
  [SMALL_STATE(88)] = 3950,
  [SMALL_STATE(89)] = 3960,
  [SMALL_STATE(90)] = 3970,
  [SMALL_STATE(91)] = 3980,
  [SMALL_STATE(92)] = 3992,
  [SMALL_STATE(93)] = 4002,
  [SMALL_STATE(94)] = 4014,
  [SMALL_STATE(95)] = 4026,
  [SMALL_STATE(96)] = 4036,
  [SMALL_STATE(97)] = 4046,
  [SMALL_STATE(98)] = 4056,
  [SMALL_STATE(99)] = 4066,
  [SMALL_STATE(100)] = 4076,
  [SMALL_STATE(101)] = 4086,
  [SMALL_STATE(102)] = 4096,
  [SMALL_STATE(103)] = 4106,
  [SMALL_STATE(104)] = 4118,
  [SMALL_STATE(105)] = 4130,
  [SMALL_STATE(106)] = 4144,
  [SMALL_STATE(107)] = 4154,
  [SMALL_STATE(108)] = 4164,
  [SMALL_STATE(109)] = 4174,
  [SMALL_STATE(110)] = 4184,
  [SMALL_STATE(111)] = 4194,
  [SMALL_STATE(112)] = 4204,
  [SMALL_STATE(113)] = 4216,
  [SMALL_STATE(114)] = 4226,
  [SMALL_STATE(115)] = 4236,
  [SMALL_STATE(116)] = 4246,
  [SMALL_STATE(117)] = 4258,
  [SMALL_STATE(118)] = 4268,
  [SMALL_STATE(119)] = 4280,
  [SMALL_STATE(120)] = 4293,
  [SMALL_STATE(121)] = 4306,
  [SMALL_STATE(122)] = 4317,
  [SMALL_STATE(123)] = 4328,
  [SMALL_STATE(124)] = 4339,
  [SMALL_STATE(125)] = 4352,
  [SMALL_STATE(126)] = 4365,
  [SMALL_STATE(127)] = 4374,
  [SMALL_STATE(128)] = 4385,
  [SMALL_STATE(129)] = 4396,
  [SMALL_STATE(130)] = 4407,
  [SMALL_STATE(131)] = 4420,
  [SMALL_STATE(132)] = 4433,
  [SMALL_STATE(133)] = 4442,
  [SMALL_STATE(134)] = 4449,
  [SMALL_STATE(135)] = 4460,
  [SMALL_STATE(136)] = 4473,
  [SMALL_STATE(137)] = 4480,
  [SMALL_STATE(138)] = 4491,
  [SMALL_STATE(139)] = 4502,
  [SMALL_STATE(140)] = 4509,
  [SMALL_STATE(141)] = 4520,
  [SMALL_STATE(142)] = 4533,
  [SMALL_STATE(143)] = 4546,
  [SMALL_STATE(144)] = 4557,
  [SMALL_STATE(145)] = 4570,
  [SMALL_STATE(146)] = 4580,
  [SMALL_STATE(147)] = 4590,
  [SMALL_STATE(148)] = 4600,
  [SMALL_STATE(149)] = 4610,
  [SMALL_STATE(150)] = 4620,
  [SMALL_STATE(151)] = 4630,
  [SMALL_STATE(152)] = 4638,
  [SMALL_STATE(153)] = 4648,
  [SMALL_STATE(154)] = 4656,
  [SMALL_STATE(155)] = 4666,
  [SMALL_STATE(156)] = 4674,
  [SMALL_STATE(157)] = 4684,
  [SMALL_STATE(158)] = 4694,
  [SMALL_STATE(159)] = 4704,
  [SMALL_STATE(160)] = 4714,
  [SMALL_STATE(161)] = 4724,
  [SMALL_STATE(162)] = 4734,
  [SMALL_STATE(163)] = 4744,
  [SMALL_STATE(164)] = 4754,
  [SMALL_STATE(165)] = 4762,
  [SMALL_STATE(166)] = 4772,
  [SMALL_STATE(167)] = 4778,
  [SMALL_STATE(168)] = 4788,
  [SMALL_STATE(169)] = 4798,
  [SMALL_STATE(170)] = 4804,
  [SMALL_STATE(171)] = 4814,
  [SMALL_STATE(172)] = 4822,
  [SMALL_STATE(173)] = 4832,
  [SMALL_STATE(174)] = 4842,
  [SMALL_STATE(175)] = 4852,
  [SMALL_STATE(176)] = 4862,
  [SMALL_STATE(177)] = 4872,
  [SMALL_STATE(178)] = 4882,
  [SMALL_STATE(179)] = 4892,
  [SMALL_STATE(180)] = 4902,
  [SMALL_STATE(181)] = 4912,
  [SMALL_STATE(182)] = 4922,
  [SMALL_STATE(183)] = 4932,
  [SMALL_STATE(184)] = 4938,
  [SMALL_STATE(185)] = 4948,
  [SMALL_STATE(186)] = 4958,
  [SMALL_STATE(187)] = 4968,
  [SMALL_STATE(188)] = 4978,
  [SMALL_STATE(189)] = 4988,
  [SMALL_STATE(190)] = 4998,
  [SMALL_STATE(191)] = 5008,
  [SMALL_STATE(192)] = 5018,
  [SMALL_STATE(193)] = 5028,
  [SMALL_STATE(194)] = 5038,
  [SMALL_STATE(195)] = 5048,
  [SMALL_STATE(196)] = 5058,
  [SMALL_STATE(197)] = 5065,
  [SMALL_STATE(198)] = 5072,
  [SMALL_STATE(199)] = 5077,
  [SMALL_STATE(200)] = 5084,
  [SMALL_STATE(201)] = 5089,
  [SMALL_STATE(202)] = 5096,
  [SMALL_STATE(203)] = 5101,
  [SMALL_STATE(204)] = 5106,
  [SMALL_STATE(205)] = 5113,
  [SMALL_STATE(206)] = 5120,
  [SMALL_STATE(207)] = 5127,
  [SMALL_STATE(208)] = 5134,
  [SMALL_STATE(209)] = 5141,
  [SMALL_STATE(210)] = 5148,
  [SMALL_STATE(211)] = 5153,
  [SMALL_STATE(212)] = 5158,
  [SMALL_STATE(213)] = 5163,
  [SMALL_STATE(214)] = 5168,
  [SMALL_STATE(215)] = 5175,
  [SMALL_STATE(216)] = 5180,
  [SMALL_STATE(217)] = 5187,
  [SMALL_STATE(218)] = 5192,
  [SMALL_STATE(219)] = 5197,
  [SMALL_STATE(220)] = 5201,
  [SMALL_STATE(221)] = 5205,
  [SMALL_STATE(222)] = 5209,
  [SMALL_STATE(223)] = 5213,
  [SMALL_STATE(224)] = 5217,
  [SMALL_STATE(225)] = 5221,
  [SMALL_STATE(226)] = 5225,
  [SMALL_STATE(227)] = 5229,
  [SMALL_STATE(228)] = 5233,
  [SMALL_STATE(229)] = 5237,
  [SMALL_STATE(230)] = 5241,
  [SMALL_STATE(231)] = 5245,
  [SMALL_STATE(232)] = 5249,
  [SMALL_STATE(233)] = 5253,
  [SMALL_STATE(234)] = 5257,
  [SMALL_STATE(235)] = 5261,
  [SMALL_STATE(236)] = 5265,
  [SMALL_STATE(237)] = 5269,
  [SMALL_STATE(238)] = 5273,
  [SMALL_STATE(239)] = 5277,
  [SMALL_STATE(240)] = 5281,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 11),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_list_comprehension, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_list_comprehension, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_list_comprehension, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_list_comprehension, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(76),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_list_filter, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(16),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(128),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_list_filter, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(126),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(74),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_list_generator, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_list_generator, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(25),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(238),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_bitstring_generator, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_bitstring_generator, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_bitstring_generator, 6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_bitstring_generator, 6),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(167),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(150),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(60),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(186),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 7, .production_id = 12),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [588] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 8),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 3, .production_id = 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
