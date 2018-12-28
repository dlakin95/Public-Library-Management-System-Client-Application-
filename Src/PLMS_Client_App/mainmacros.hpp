#ifndef MAINMACROS_HPP
#define MAINMACROS_HPP

// ------------------ Macros ----------------------------------------------------------------------------
// Main Application Macros --------------------------------------------------------------------
#define APP_NAME ("Aplikacja biblioteki publicznej")
#define APP_VERSION ("ver 1.0")
// --------------------------------------------------------------------------------------------

// Memory Pointer Macros ------------------------------------------------------------------------------
#define SET_PTR_DO(ptr, newPtr) {if(ptr) delete ptr; ptr = newPtr;}
#define SET_PTR_NDO(ptr) {ptr = newPtr;}
// ---------------------------------------------------------------------------------------------

// _PH_ TEST ICON FOR TESTING :P ---------------------------------------------------------
#define TEST_ICON (QString(":/icons/testIcon.png"))

// Main Macros For Windows --------------------------------------------------------------------------
#define WINDOW_STATUS_SAVE(windowStatusPTR) *(windowStatusPTR + 1) = *windowStatusPTR;
// -----------------------------------------------------------------------------------------------

// Text Macros For Menu ----------------------------------------------------------------------------
#define APPLICATION_MENU_TEXT ("Program")
#define TOOLS_MENU_TEXT ("Narzędzia")
#define HELP_MENU_TEXT ("Pomoc")

// Application Menu Actions
#define APPLICATION_MENU_LOGIN_ACTION_TEXT ("Zaloguj")
#define APPLICATION_MENU_REGISTER_ACTION_TEXT ("Stwórz konto")
#define APPLICATION_MENU_QUIT_ACTION_TEXT ("Wyjdź")

// Tools Menu Actions
#define TOOLS_MENU_YOUR_ACCOUNT_ACTION_TEXT ("Twoje konto")
#define TOOLS_MENU_USERS_ACTION_TEXT ("Użytkownicy")
#define TOOLS_MENU_BOOKS_ACTION_TEXT ("Książki")
#define TOOLS_MENU_LOGOUT_ACTION_TEXT ("Wyloguj")
#define TOOLS_MENU_READERS_ACTION_TEXT ("Czytelnicy")
#define TOOLS_MENU_YOUR_BOOKS_ACTION_TEXT ("Twoje książki")
#define TOOLS_MENU_LIBRARY_ACTION_TEXT ("Biblioteka")

// Help Menu Actions
#define HELP_MENU_APP_INFO_ACTION_TEXT ("O programie")
#define HELP_MENU_HELP_ACTION_TEXT ("Pomoc")

// -------------------------------------------------------------------------------------------------------------

// Icon Files for Tool Bar-----------------------------------------------------------------------------------------------------
#define TOOL_BAR_LOGIN_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_REGISTER_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_HELP_ACTION_ICON QIcon(QString(":/icons/helpIcon.png"))
#define TOOL_BAR_YOUR_ACCOUNT_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_USERS_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_BOOKS_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_LOGOUT_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_READERS_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_YOUR_BOOKS_ACTION_ICON QIcon(TEST_ICON)
#define TOOL_BAR_LIBRARY_ACTION_ICON QIcon(TEST_ICON)
// --------------------------------------------------------------------------------------------------------------------

// Icon or PixMap Files for Prompt Panel ---------------------------------------------------------------------------------
#define PROMPT_PANEL_CLOSE_BUTTON_PIXMAP QPixmap(QString(":/icons/closeButtonIcon.png"))
#define PROMPT_PANEL_MINIMIZE_BUTTON_INFO_ICON QPixmap(QString(":/icons/infoPromptIcon.png"))
#define PROMPT_PANEL_MINIMIZE_BUTTON_ERROR_ICON QPixmap(QString(":/icons/errorPromptIcon.png"))
#define PROMPT_PANEL_MINIMIZE_BUTTON_UP_EXTEND_ARROW_ICON QPixmap(QString(":/icons/upExtendArrowIcon.png"))
#define PROMPT_PANEL_MINIMIZE_BUTTON_DOWN_EXTEND_ARROW_ICON QPixmap(QString(":/icons/downExtendArrowIcon.png"))
#define PROMPT_PANEL_MAXIMIZE_BUTTON_UP_EXTEND_ARROW_ICON QPixmap(QString(":/icons/upExtendArrowIcon.png"))
#define PROMPT_PANEL_MAXIMIZE_BUTTON_DOWN_EXTEND_ARROW_ICON QPixmap(QString(":/icons/downExtendArrowIcon.png"))
#define PROMPT_ELEMENT_EXPAND_BUTTON_UP_EXTEND_ARROW_ICON QPixmap(QString(":/icons/upExtendArrowIcon.png"))
#define PROMPT_ELEMENT_EXPAND_BUTTON_DOWN_EXTEND_ARROW_ICON QPixmap(QString(":/icons/downExtendArrowIcon.png"))
// -------------------------------------------------------------------------------------------------------------

// Status Bar Macros -------------------------------------------------------------------------------------------
#define STATUS_BAR_READY_TEXT (QString("Gotowy"))
// ------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------
#endif // MAINMACROS_HPP