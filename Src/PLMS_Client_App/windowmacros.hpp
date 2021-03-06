#ifndef WINDOWMACROS_HPP
#define WINDOWMACROS_HPP

// File for graphical elements macros (Start with command to group up all)

// Menu -------------------------------------------------------------------------------------
// Menu Bar
#define MENU_BAR_HEIGHT (20)
//-------------------------------------------------------------------------------------------

// ToolBar -------------------------------------------------------------------------------------
#define TOOL_BAR_HEIGHT (25)
//-------------------------------------------------------------------------------------------

// App Window ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define APP_WINDOW_WIDTH (/* _PH_ TEST*/ 600)
#define APP_WINDOW_HEIGHT (/* _PH_ TEST*/ 500)
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Status Bar (depends of AppWindow) ----------------------------------------------------------------------------------
#define STATUS_BAR_WIDTH (APP_WINDOW_WIDTH)
#define STATUS_BAR_HEIGHT (20)
#define STATUS_BAR_X (0)
#define STATUS_BAR_Y (APP_WINDOW_HEIGHT - STATUS_BAR_HEIGHT)
// --------------------------------------------------------------------------------------------------------------------

// Tab Bar (depends of AppWindow) -------------------------------------------------------------------------------------
#define TABBAR_BUTTON_WIDTH (25)
#define TABBAR_SIDEOFFSET (8)
#define TABBAR_WIDTH (APP_WINDOW_WIDTH)
#define TABBAR_ELEMENT_WIDTH_BEFORE_CREATING (QLabel(((*(parent->getParent()->getUsers() + i))->getUserName())).fontMetrics().horizontalAdvance((*(parent->getParent()->getUsers() + i))->getUserName()) + TABBAR_BUTTON_WIDTH + 2 * TABBAR_SIDEOFFSET)
#define TABBAR_ELEMENT_WIDTH_FOR_CREATED (QLabel((*(userTabs + i))->getUserNameLabel()->text()).fontMetrics().horizontalAdvance((*(userTabs + i))->getUserNameLabel()->text()) + offset +  TABBAR_BUTTON_WIDTH + 2 * TABBAR_SIDEOFFSET)
#define TABBAR_HEIGHT (25)
#define TABBAR_BUTTONS_OFFSET (2)
#define TABBAR_X (0)
#define TABBAR_Y (MENU_BAR_HEIGHT + TOOL_BAR_HEIGHT)
// -------------------------------------------------------------------------------------------------------------------

// Prompt Panel (depends of AppWindow) ---------------------------------------------------------------------------------
// Prompt Panel (depends of AppWindow)
#define PROMPT_PANEL_WIDTH (APP_WINDOW_WIDTH)

// Prompt Element Expand Button
#define PROMPT_ELEMENT_EXPAND_BUTTON_ICON_WIDTH (20)
#define PROMPT_ELEMENT_EXPAND_BUTTON_ICON_HEIGHT (20)
#define PROMPT_ELEMENT_EXPAND_BUTTON_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_ELEMENT_EXPAND_BUTTON_HEIGHT (PROMPT_ELEMENT_EXPAND_BUTTON_ICON_HEIGHT)
#define PROMPT_ELEMENT_EXPAND_BUTTON_ARROW_X ((PROMPT_ELEMENT_EXPAND_BUTTON_WIDTH - PROMPT_ELEMENT_EXPAND_BUTTON_ICON_WIDTH) * 0.5)
#define PROMPT_ELEMENT_EXPAND_BUTTON_ARROW_Y (0)

// Prompt Element
#define PROMPT_ELEMENT_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_ELEMENT_BUTTON_WIDTH (20)
#define PROMPT_ELEMENT_BUTTON_HEIGHT (20)
#define PROMPT_ELEMENT_ERROR_LABEL_WIDTH (20)
#define PROMPT_ELEMENT_ERROR_LABEL_HEIGHT (20)
#define PROMPT_ELEMENT_GENERAL_INFO_LABEL_WIDTH (PROMPT_ELEMENT_WIDTH - PROMPT_ELEMENT_BUTTON_WIDTH - PROMPT_ELEMENT_ERROR_LABEL_WIDTH)

// Maximize Button
#define PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_WIDTH (20)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_HEIGHT (20)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_INFO_WIDTH (20)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_INFO_HEIGHT (20)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_X ((PROMPT_PANEL_MAXIMIZE_BUTTON_WIDTH - PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_WIDTH) * 0.5)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_Y (0)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_PANEL_MAXIMIZE_BUTTON_HEIGHT (PROMPT_PANEL_MAXIMIZE_BUTTON_ARROW_HEIGHT)
// Minimize Button
#define PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_WIDTH (20)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_HEIGHT (20)
#define PROMPT_PANEL_MINIMIZE_BUTTON_INFO_WIDTH (20)
#define PROMPT_PANEL_MINIMIZE_BUTTON_INFO_HEIGHT (20)
#define PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_PANEL_MINIMIZE_BUTTON_HEIGHT (PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_HEIGHT)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_X ((PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH - PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_WIDTH) * 0.5)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ERROR_ICON_X (PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH - 4 * PROMPT_PANEL_MINIMIZE_BUTTON_INFO_WIDTH)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ERROR_ICON_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_WARNING_ICON_X (PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH - 2 * PROMPT_PANEL_MINIMIZE_BUTTON_INFO_WIDTH)
#define PROMPT_PANEL_MINIMIZE_BUTTON_WARNING_ICON_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ERROR_NUMB_X (PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH - 3 * PROMPT_PANEL_MINIMIZE_BUTTON_INFO_WIDTH)
#define PROMPT_PANEL_MINIMIZE_BUTTON_ERROR_NUMB_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_WARNING_NUMB_X (PROMPT_PANEL_MINIMIZE_BUTTON_WIDTH - PROMPT_PANEL_MINIMIZE_BUTTON_INFO_WIDTH)
#define PROMPT_PANEL_MINIMIZE_BUTTON_WARNING_NUMB_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_X (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_Y (height() - PROMPT_PANEL_MINIMIZE_BUTTON_HEIGHT)
#define PROMPT_PANEL_MINIMIZE_BUTTON_SERVER_STATUS_LABEL_X (10)
#define PROMPT_PANEL_MINIMIZE_BUTTON_SERVER_STATUS_LABEL_Y (0)
#define PROMPT_PANEL_MINIMIZE_BUTTON_SERVER_STATUS_LABEL_WIDTH (PROMPT_PANEL_MINIMIZE_BUTTON_ARROW_X - PROMPT_PANEL_MINIMIZE_BUTTON_SERVER_STATUS_LABEL_X)
#define PROMPT_PANEL_MINIMIZE_BUTTON_SERVER_STATUS_LABEL_HEIGHT (20)

// Prompt List
#define PROMPT_LIST_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_LIST_HEIGHT (height() - PROMPT_PANEL_MINIMIZE_BUTTON_HEIGHT - PROMPT_PANEL_MAXIMIZE_BUTTON_HEIGHT)
#define PROMPT_LIST_X (0)
#define PROMPT_LIST_Y (PROMPT_PANEL_MAXIMIZE_BUTTON_HEIGHT)

// Prompt Scroll Area
#define PROMPT_LIST_SA_X (0)
#define PROMPT_LIST_SA_Y (PROMPT_PANEL_MAXIMIZE_BUTTON_HEIGHT)
#define PROMPT_LIST_SA_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_LIST_SA_HEIGHT (PROMPT_LIST_HEIGHT)

// Prompt Panel (depends of elements of Prompt Panel)
#define PROMPT_PANEL_BOTTOM_BORDER_X (0)
#define PROMPT_PANEL_BOTTOM_BORDER_Y (STATUS_BAR_Y)
#define PROMPT_PANEL_HIDDEN_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_PANEL_HIDDEN_HEIGHT (PROMPT_PANEL_MINIMIZE_BUTTON_HEIGHT)
#define PROMPT_PANEL_HIDDEN_X (PROMPT_PANEL_BOTTOM_BORDER_X)
#define PROMPT_PANEL_HIDDEN_Y (PROMPT_PANEL_BOTTOM_BORDER_Y - PROMPT_PANEL_HIDDEN_HEIGHT)
#define PROMPT_PANEL_MINIMIZE_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_PANEL_MINIMIZE_HEIGHT (0.3 * APP_WINDOW_HEIGHT)
#define PROMPT_PANEL_MINIMIZE_X (PROMPT_PANEL_BOTTOM_BORDER_X)
#define PROMPT_PANEL_MINIMIZE_Y (PROMPT_PANEL_BOTTOM_BORDER_Y - PROMPT_PANEL_MINIMIZE_HEIGHT)
#define PROMPT_PANEL_MAXIMIZE_WIDTH (PROMPT_PANEL_WIDTH)
#define PROMPT_PANEL_MAXIMIZE_HEIGHT (PROMPT_PANEL_BOTTOM_BORDER_Y - MENU_BAR_HEIGHT - TOOL_BAR_HEIGHT)
#define PROMPT_PANEL_MAXIMIZE_X (PROMPT_PANEL_BOTTOM_BORDER_X)
#define PROMPT_PANEL_MAXIMIZE_Y (PROMPT_PANEL_BOTTOM_BORDER_Y - PROMPT_PANEL_MAXIMIZE_HEIGHT)

// ----------------------------------------------------------------------------------------------

// App Window Central Panel ---------------------------------------------------------------------
#define APP_WINDOW_CENTRAL_PANEL_X (0)
#define APP_WINDOW_CENTRAL_PANEL_Y (TABBAR_Y + TABBAR_HEIGHT)
#define APP_WINDOW_CENTRAL_PANEL_WIDTH (APP_WINDOW_WIDTH)
#define APP_WINDOW_CENTRAL_PANEL_HEIGHT (APP_WINDOW_HEIGHT - TABBAR_HEIGHT - MENU_BAR_HEIGHT - TOOL_BAR_HEIGHT - STATUS_BAR_HEIGHT)

// App Window Login Panel -------------------------------
// Elements Macros Sizes
#define APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT (25)
#define APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET (20)
#define APP_WINDOW_LOGIN_PANEL_ELEMENTS_VERTICAL_OFFSET (20)

// Main Layout Macros
#define APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_HEIGHT (4 * APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT + 3* APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_VERTICAL_SIDE_OFFSET (0.1 * height())
#define APP_WINDOW_LOGIN_PANEL_HORIZONTAL_SIDE_OFFSET (0.2 * width())
#define APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_WIDTH (width() - 2 * APP_WINDOW_LOGIN_PANEL_HORIZONTAL_SIDE_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_TITLE_DATA_OFFSET (height() - 2 * APP_WINDOW_LOGIN_PANEL_VERTICAL_SIDE_OFFSET - APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT - APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_HEIGHT)

// Elements Macros
#define APP_WINDOW_LOGIN_PANEL_LOGIN_TITLE_X (APP_WINDOW_LOGIN_PANEL_HORIZONTAL_SIDE_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_TITLE_Y (APP_WINDOW_LOGIN_PANEL_VERTICAL_SIDE_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_TITLE_WIDTH (APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_TITLE_HEIGHT (APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_X (APP_WINDOW_LOGIN_PANEL_HORIZONTAL_SIDE_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_Y (APP_WINDOW_LOGIN_PANEL_LOGIN_TITLE_Y + APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT + APP_WINDOW_LOGIN_PANEL_TITLE_DATA_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_WIDTH ((APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_WIDTH - APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET) * 0.5)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_HEIGHT (APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_X (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_X + APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_WIDTH + APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_Y (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_Y)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_WIDTH (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_HEIGHT (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_X (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_X)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_Y (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_Y + APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_HEIGHT + APP_WINDOW_LOGIN_PANEL_ELEMENTS_VERTICAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_WIDTH (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_HEIGHT (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_PASSWORD_FIELD_X (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_LABEL_X + APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_WIDTH + APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_FIELD_Y (APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_Y)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_FIELD_WIDTH (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_FIELD_HEIGHT (APP_WINDOW_LOGIN_PANEL_LOGIN_NAME_FIELD_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_X (APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_X)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_Y (APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_Y + APP_WINDOW_LOGIN_PANEL_PASSWORD_LABEL_HEIGHT + APP_WINDOW_LOGIN_PANEL_ELEMENTS_VERTICAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_WIDTH (APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_HEIGHT (APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT)

#define APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_WIDTH ((APP_WINDOW_LOGIN_PANEL_DATA_CONTROL_WIDTH - 3 * APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET) * 0.5)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_HEIGHT (APP_WINDOW_LOGIN_PANEL_ELEMENTS_HEIGHT)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_X (APP_WINDOW_LOGIN_PANEL_HORIZONTAL_SIDE_OFFSET + APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_Y (APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_Y + APP_WINDOW_LOGIN_PANEL_PASSWORD_HIDDEN_CHECKBOX_HEIGHT + APP_WINDOW_LOGIN_PANEL_ELEMENTS_VERTICAL_OFFSET)

#define APP_WINDOW_LOGIN_PANEL_REGISTER_BUTTON_X (APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_X + APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_WIDTH + APP_WINDOW_LOGIN_PANEL_ELEMENTS_HORIZONTAL_OFFSET)
#define APP_WINDOW_LOGIN_PANEL_REGISTER_BUTTON_Y (APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_Y)
#define APP_WINDOW_LOGIN_PANEL_REGISTER_BUTTON_WIDTH (APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_WIDTH)
#define APP_WINDOW_LOGIN_PANEL_REGISTER_BUTTON_HEIGHT (APP_WINDOW_LOGIN_PANEL_LOGIN_BUTTON_HEIGHT)
// ----------------------------------------------------------------------------------------------------


#endif // WINDOWMACROS_HPP
