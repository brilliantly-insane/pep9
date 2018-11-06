/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[85];
    char stringdata0[2565];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "fontChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "font"
QT_MOC_LITERAL(4, 29, 12), // "colorChanged"
QT_MOC_LITERAL(5, 42, 27), // "on_actionFile_New_triggered"
QT_MOC_LITERAL(6, 70, 28), // "on_actionFile_Open_triggered"
QT_MOC_LITERAL(7, 99, 35), // "on_actionFile_Save_Source_tri..."
QT_MOC_LITERAL(8, 135, 38), // "on_actionFile_Save_Source_As_..."
QT_MOC_LITERAL(9, 174, 38), // "on_actionFile_Save_Object_As_..."
QT_MOC_LITERAL(10, 213, 39), // "on_actionFile_Save_Listing_As..."
QT_MOC_LITERAL(11, 253, 36), // "on_actionFile_Print_Source_tr..."
QT_MOC_LITERAL(12, 290, 36), // "on_actionFile_Print_Object_tr..."
QT_MOC_LITERAL(13, 327, 37), // "on_actionFile_Print_Listing_t..."
QT_MOC_LITERAL(14, 365, 28), // "on_actionEdit_Undo_triggered"
QT_MOC_LITERAL(15, 394, 28), // "on_actionEdit_Redo_triggered"
QT_MOC_LITERAL(16, 423, 27), // "on_actionEdit_Cut_triggered"
QT_MOC_LITERAL(17, 451, 28), // "on_actionEdit_Copy_triggered"
QT_MOC_LITERAL(18, 480, 29), // "on_actionEdit_Paste_triggered"
QT_MOC_LITERAL(19, 510, 43), // "on_actionEdit_Format_From_Lis..."
QT_MOC_LITERAL(20, 554, 28), // "on_actionEdit_Font_triggered"
QT_MOC_LITERAL(21, 583, 40), // "on_actionRest_Fonts_to_Defaul..."
QT_MOC_LITERAL(22, 624, 33), // "on_actionOperator_Color_trigg..."
QT_MOC_LITERAL(23, 658, 31), // "on_actionSymbol_Color_triggered"
QT_MOC_LITERAL(24, 690, 32), // "on_actionComment_Color_triggered"
QT_MOC_LITERAL(25, 723, 31), // "on_actionString_Color_triggered"
QT_MOC_LITERAL(26, 755, 34), // "on_actionWarningBg_Color_trig..."
QT_MOC_LITERAL(27, 790, 34), // "on_actionWarningFg_Color_trig..."
QT_MOC_LITERAL(28, 825, 32), // "on_actionErrorBg_Color_triggered"
QT_MOC_LITERAL(29, 858, 32), // "on_actionErrorFg_Color_triggered"
QT_MOC_LITERAL(30, 891, 45), // "on_actionEdit_Remove_Error_Me..."
QT_MOC_LITERAL(31, 937, 33), // "on_actionBuild_Assemble_trigg..."
QT_MOC_LITERAL(32, 971, 29), // "on_actionBuild_Load_triggered"
QT_MOC_LITERAL(33, 1001, 32), // "on_actionBuild_Execute_triggered"
QT_MOC_LITERAL(34, 1034, 35), // "on_actionBuild_Run_Source_tri..."
QT_MOC_LITERAL(35, 1070, 47), // "on_actionBuild_Start_Debuggin..."
QT_MOC_LITERAL(36, 1118, 35), // "on_actionBuild_Run_Object_tri..."
QT_MOC_LITERAL(37, 1154, 47), // "on_actionBuild_Start_Debuggin..."
QT_MOC_LITERAL(38, 1202, 47), // "on_actionBuild_Start_Debuggin..."
QT_MOC_LITERAL(39, 1250, 39), // "on_actionBuild_Stop_Debugging..."
QT_MOC_LITERAL(40, 1290, 44), // "on_actionBuild_Interrupt_Exec..."
QT_MOC_LITERAL(41, 1335, 33), // "on_actionView_Code_Only_trigg..."
QT_MOC_LITERAL(42, 1369, 32), // "on_actionView_Code_CPU_triggered"
QT_MOC_LITERAL(43, 1402, 39), // "on_actionView_Code_CPU_Memory..."
QT_MOC_LITERAL(44, 1442, 32), // "on_actionView_Code_Tab_triggered"
QT_MOC_LITERAL(45, 1475, 33), // "on_actionView_Trace_Tab_trigg..."
QT_MOC_LITERAL(46, 1509, 37), // "on_actionView_Batch_I_O_Tab_t..."
QT_MOC_LITERAL(47, 1547, 36), // "on_actionView_Terminal_Tab_tr..."
QT_MOC_LITERAL(48, 1584, 38), // "on_actionSystem_Clear_Memory_..."
QT_MOC_LITERAL(49, 1623, 44), // "on_actionSystem_Redefine_Mnem..."
QT_MOC_LITERAL(50, 1668, 49), // "on_actionSystem_Assemble_Inst..."
QT_MOC_LITERAL(51, 1718, 46), // "on_actionSystem_Reinstall_Def..."
QT_MOC_LITERAL(52, 1765, 23), // "on_actionHelp_triggered"
QT_MOC_LITERAL(53, 1789, 41), // "on_actionHelp_Check_for_updat..."
QT_MOC_LITERAL(54, 1831, 40), // "on_actionHelp_Machine_Languag..."
QT_MOC_LITERAL(55, 1872, 41), // "on_actionHelp_Assembly_Langua..."
QT_MOC_LITERAL(56, 1914, 42), // "on_actionHelp_Debugging_Progr..."
QT_MOC_LITERAL(57, 1957, 45), // "on_actionHelp_Writing_Trap_Ha..."
QT_MOC_LITERAL(58, 2003, 39), // "on_actionHelp_Pep_9_Reference..."
QT_MOC_LITERAL(59, 2043, 32), // "on_actionHelp_Examples_triggered"
QT_MOC_LITERAL(60, 2076, 46), // "on_actionHelp_Pep_9_Operating..."
QT_MOC_LITERAL(61, 2123, 29), // "on_actionAbout_Pep9_triggered"
QT_MOC_LITERAL(62, 2153, 27), // "on_actionAbout_Qt_triggered"
QT_MOC_LITERAL(63, 2181, 29), // "helpCopyToSourceButtonClicked"
QT_MOC_LITERAL(64, 2211, 26), // "slotByteConverterDecEdited"
QT_MOC_LITERAL(65, 2238, 26), // "slotByteConverterHexEdited"
QT_MOC_LITERAL(66, 2265, 26), // "slotByteConverterBinEdited"
QT_MOC_LITERAL(67, 2292, 27), // "slotByteConverterCharEdited"
QT_MOC_LITERAL(68, 2320, 19), // "mainWindowUtilities"
QT_MOC_LITERAL(69, 2340, 8), // "QWidget*"
QT_MOC_LITERAL(70, 2349, 14), // "setUndoability"
QT_MOC_LITERAL(71, 2364, 1), // "b"
QT_MOC_LITERAL(72, 2366, 14), // "setRedoability"
QT_MOC_LITERAL(73, 2381, 22), // "doubleClickedCodeLabel"
QT_MOC_LITERAL(74, 2404, 10), // "Enu::EPane"
QT_MOC_LITERAL(75, 2415, 4), // "pane"
QT_MOC_LITERAL(76, 2420, 20), // "updateSimulationView"
QT_MOC_LITERAL(77, 2441, 17), // "vonNeumannStepped"
QT_MOC_LITERAL(78, 2459, 12), // "appendOutput"
QT_MOC_LITERAL(79, 2472, 3), // "str"
QT_MOC_LITERAL(80, 2476, 15), // "waitingForInput"
QT_MOC_LITERAL(81, 2492, 13), // "inputReceived"
QT_MOC_LITERAL(82, 2506, 19), // "resumeButtonClicked"
QT_MOC_LITERAL(83, 2526, 23), // "singleStepButtonClicked"
QT_MOC_LITERAL(84, 2550, 14) // "openRecentFile"

    },
    "MainWindow\0fontChanged\0\0font\0colorChanged\0"
    "on_actionFile_New_triggered\0"
    "on_actionFile_Open_triggered\0"
    "on_actionFile_Save_Source_triggered\0"
    "on_actionFile_Save_Source_As_triggered\0"
    "on_actionFile_Save_Object_As_triggered\0"
    "on_actionFile_Save_Listing_As_triggered\0"
    "on_actionFile_Print_Source_triggered\0"
    "on_actionFile_Print_Object_triggered\0"
    "on_actionFile_Print_Listing_triggered\0"
    "on_actionEdit_Undo_triggered\0"
    "on_actionEdit_Redo_triggered\0"
    "on_actionEdit_Cut_triggered\0"
    "on_actionEdit_Copy_triggered\0"
    "on_actionEdit_Paste_triggered\0"
    "on_actionEdit_Format_From_Listing_triggered\0"
    "on_actionEdit_Font_triggered\0"
    "on_actionRest_Fonts_to_Default_triggered\0"
    "on_actionOperator_Color_triggered\0"
    "on_actionSymbol_Color_triggered\0"
    "on_actionComment_Color_triggered\0"
    "on_actionString_Color_triggered\0"
    "on_actionWarningBg_Color_triggered\0"
    "on_actionWarningFg_Color_triggered\0"
    "on_actionErrorBg_Color_triggered\0"
    "on_actionErrorFg_Color_triggered\0"
    "on_actionEdit_Remove_Error_Messages_triggered\0"
    "on_actionBuild_Assemble_triggered\0"
    "on_actionBuild_Load_triggered\0"
    "on_actionBuild_Execute_triggered\0"
    "on_actionBuild_Run_Source_triggered\0"
    "on_actionBuild_Start_Debugging_Source_triggered\0"
    "on_actionBuild_Run_Object_triggered\0"
    "on_actionBuild_Start_Debugging_Object_triggered\0"
    "on_actionBuild_Start_Debugging_Loader_triggered\0"
    "on_actionBuild_Stop_Debugging_triggered\0"
    "on_actionBuild_Interrupt_Execution_triggered\0"
    "on_actionView_Code_Only_triggered\0"
    "on_actionView_Code_CPU_triggered\0"
    "on_actionView_Code_CPU_Memory_triggered\0"
    "on_actionView_Code_Tab_triggered\0"
    "on_actionView_Trace_Tab_triggered\0"
    "on_actionView_Batch_I_O_Tab_triggered\0"
    "on_actionView_Terminal_Tab_triggered\0"
    "on_actionSystem_Clear_Memory_triggered\0"
    "on_actionSystem_Redefine_Mnemonics_triggered\0"
    "on_actionSystem_Assemble_Install_New_OS_triggered\0"
    "on_actionSystem_Reinstall_Default_OS_triggered\0"
    "on_actionHelp_triggered\0"
    "on_actionHelp_Check_for_updates_triggered\0"
    "on_actionHelp_Machine_Language_triggered\0"
    "on_actionHelp_Assembly_Language_triggered\0"
    "on_actionHelp_Debugging_Programs_triggered\0"
    "on_actionHelp_Writing_Trap_Handlers_triggered\0"
    "on_actionHelp_Pep_9_Reference_triggered\0"
    "on_actionHelp_Examples_triggered\0"
    "on_actionHelp_Pep_9_Operating_System_triggered\0"
    "on_actionAbout_Pep9_triggered\0"
    "on_actionAbout_Qt_triggered\0"
    "helpCopyToSourceButtonClicked\0"
    "slotByteConverterDecEdited\0"
    "slotByteConverterHexEdited\0"
    "slotByteConverterBinEdited\0"
    "slotByteConverterCharEdited\0"
    "mainWindowUtilities\0QWidget*\0"
    "setUndoability\0b\0setRedoability\0"
    "doubleClickedCodeLabel\0Enu::EPane\0"
    "pane\0updateSimulationView\0vonNeumannStepped\0"
    "appendOutput\0str\0waitingForInput\0"
    "inputReceived\0resumeButtonClicked\0"
    "singleStepButtonClicked\0openRecentFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      77,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  399,    2, 0x06 /* Public */,
       4,    0,  402,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  403,    2, 0x08 /* Private */,
       6,    0,  404,    2, 0x08 /* Private */,
       7,    0,  405,    2, 0x08 /* Private */,
       8,    0,  406,    2, 0x08 /* Private */,
       9,    0,  407,    2, 0x08 /* Private */,
      10,    0,  408,    2, 0x08 /* Private */,
      11,    0,  409,    2, 0x08 /* Private */,
      12,    0,  410,    2, 0x08 /* Private */,
      13,    0,  411,    2, 0x08 /* Private */,
      14,    0,  412,    2, 0x08 /* Private */,
      15,    0,  413,    2, 0x08 /* Private */,
      16,    0,  414,    2, 0x08 /* Private */,
      17,    0,  415,    2, 0x08 /* Private */,
      18,    0,  416,    2, 0x08 /* Private */,
      19,    0,  417,    2, 0x08 /* Private */,
      20,    0,  418,    2, 0x08 /* Private */,
      21,    0,  419,    2, 0x08 /* Private */,
      22,    0,  420,    2, 0x08 /* Private */,
      23,    0,  421,    2, 0x08 /* Private */,
      24,    0,  422,    2, 0x08 /* Private */,
      25,    0,  423,    2, 0x08 /* Private */,
      26,    0,  424,    2, 0x08 /* Private */,
      27,    0,  425,    2, 0x08 /* Private */,
      28,    0,  426,    2, 0x08 /* Private */,
      29,    0,  427,    2, 0x08 /* Private */,
      30,    0,  428,    2, 0x08 /* Private */,
      31,    0,  429,    2, 0x08 /* Private */,
      32,    0,  430,    2, 0x08 /* Private */,
      33,    0,  431,    2, 0x08 /* Private */,
      34,    0,  432,    2, 0x08 /* Private */,
      35,    0,  433,    2, 0x08 /* Private */,
      36,    0,  434,    2, 0x08 /* Private */,
      37,    0,  435,    2, 0x08 /* Private */,
      38,    0,  436,    2, 0x08 /* Private */,
      39,    0,  437,    2, 0x08 /* Private */,
      40,    0,  438,    2, 0x08 /* Private */,
      41,    0,  439,    2, 0x08 /* Private */,
      42,    0,  440,    2, 0x08 /* Private */,
      43,    0,  441,    2, 0x08 /* Private */,
      44,    0,  442,    2, 0x08 /* Private */,
      45,    0,  443,    2, 0x08 /* Private */,
      46,    0,  444,    2, 0x08 /* Private */,
      47,    0,  445,    2, 0x08 /* Private */,
      48,    0,  446,    2, 0x08 /* Private */,
      49,    0,  447,    2, 0x08 /* Private */,
      50,    0,  448,    2, 0x08 /* Private */,
      51,    0,  449,    2, 0x08 /* Private */,
      52,    0,  450,    2, 0x08 /* Private */,
      53,    0,  451,    2, 0x08 /* Private */,
      54,    0,  452,    2, 0x08 /* Private */,
      55,    0,  453,    2, 0x08 /* Private */,
      56,    0,  454,    2, 0x08 /* Private */,
      57,    0,  455,    2, 0x08 /* Private */,
      58,    0,  456,    2, 0x08 /* Private */,
      59,    0,  457,    2, 0x08 /* Private */,
      60,    0,  458,    2, 0x08 /* Private */,
      61,    0,  459,    2, 0x08 /* Private */,
      62,    0,  460,    2, 0x08 /* Private */,
      63,    0,  461,    2, 0x08 /* Private */,
      64,    1,  462,    2, 0x08 /* Private */,
      65,    1,  465,    2, 0x08 /* Private */,
      66,    1,  468,    2, 0x08 /* Private */,
      67,    1,  471,    2, 0x08 /* Private */,
      68,    2,  474,    2, 0x08 /* Private */,
      70,    1,  479,    2, 0x08 /* Private */,
      72,    1,  482,    2, 0x08 /* Private */,
      73,    1,  485,    2, 0x08 /* Private */,
      76,    0,  488,    2, 0x08 /* Private */,
      77,    0,  489,    2, 0x08 /* Private */,
      78,    1,  490,    2, 0x08 /* Private */,
      80,    0,  493,    2, 0x08 /* Private */,
      81,    0,  494,    2, 0x08 /* Private */,
      82,    0,  495,    2, 0x08 /* Private */,
      83,    0,  496,    2, 0x08 /* Private */,
      84,    0,  497,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 69, 0x80000000 | 69,    2,    2,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->on_actionFile_New_triggered(); break;
        case 3: _t->on_actionFile_Open_triggered(); break;
        case 4: { bool _r = _t->on_actionFile_Save_Source_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->on_actionFile_Save_Source_As_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->on_actionFile_Save_Object_As_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->on_actionFile_Save_Listing_As_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_actionFile_Print_Source_triggered(); break;
        case 9: _t->on_actionFile_Print_Object_triggered(); break;
        case 10: _t->on_actionFile_Print_Listing_triggered(); break;
        case 11: _t->on_actionEdit_Undo_triggered(); break;
        case 12: _t->on_actionEdit_Redo_triggered(); break;
        case 13: _t->on_actionEdit_Cut_triggered(); break;
        case 14: _t->on_actionEdit_Copy_triggered(); break;
        case 15: _t->on_actionEdit_Paste_triggered(); break;
        case 16: _t->on_actionEdit_Format_From_Listing_triggered(); break;
        case 17: _t->on_actionEdit_Font_triggered(); break;
        case 18: _t->on_actionRest_Fonts_to_Default_triggered(); break;
        case 19: _t->on_actionOperator_Color_triggered(); break;
        case 20: _t->on_actionSymbol_Color_triggered(); break;
        case 21: _t->on_actionComment_Color_triggered(); break;
        case 22: _t->on_actionString_Color_triggered(); break;
        case 23: _t->on_actionWarningBg_Color_triggered(); break;
        case 24: _t->on_actionWarningFg_Color_triggered(); break;
        case 25: _t->on_actionErrorBg_Color_triggered(); break;
        case 26: _t->on_actionErrorFg_Color_triggered(); break;
        case 27: _t->on_actionEdit_Remove_Error_Messages_triggered(); break;
        case 28: _t->on_actionBuild_Assemble_triggered(); break;
        case 29: _t->on_actionBuild_Load_triggered(); break;
        case 30: _t->on_actionBuild_Execute_triggered(); break;
        case 31: _t->on_actionBuild_Run_Source_triggered(); break;
        case 32: _t->on_actionBuild_Start_Debugging_Source_triggered(); break;
        case 33: _t->on_actionBuild_Run_Object_triggered(); break;
        case 34: _t->on_actionBuild_Start_Debugging_Object_triggered(); break;
        case 35: _t->on_actionBuild_Start_Debugging_Loader_triggered(); break;
        case 36: _t->on_actionBuild_Stop_Debugging_triggered(); break;
        case 37: _t->on_actionBuild_Interrupt_Execution_triggered(); break;
        case 38: _t->on_actionView_Code_Only_triggered(); break;
        case 39: _t->on_actionView_Code_CPU_triggered(); break;
        case 40: _t->on_actionView_Code_CPU_Memory_triggered(); break;
        case 41: _t->on_actionView_Code_Tab_triggered(); break;
        case 42: _t->on_actionView_Trace_Tab_triggered(); break;
        case 43: _t->on_actionView_Batch_I_O_Tab_triggered(); break;
        case 44: _t->on_actionView_Terminal_Tab_triggered(); break;
        case 45: _t->on_actionSystem_Clear_Memory_triggered(); break;
        case 46: _t->on_actionSystem_Redefine_Mnemonics_triggered(); break;
        case 47: _t->on_actionSystem_Assemble_Install_New_OS_triggered(); break;
        case 48: _t->on_actionSystem_Reinstall_Default_OS_triggered(); break;
        case 49: _t->on_actionHelp_triggered(); break;
        case 50: _t->on_actionHelp_Check_for_updates_triggered(); break;
        case 51: _t->on_actionHelp_Machine_Language_triggered(); break;
        case 52: _t->on_actionHelp_Assembly_Language_triggered(); break;
        case 53: _t->on_actionHelp_Debugging_Programs_triggered(); break;
        case 54: _t->on_actionHelp_Writing_Trap_Handlers_triggered(); break;
        case 55: _t->on_actionHelp_Pep_9_Reference_triggered(); break;
        case 56: _t->on_actionHelp_Examples_triggered(); break;
        case 57: _t->on_actionHelp_Pep_9_Operating_System_triggered(); break;
        case 58: _t->on_actionAbout_Pep9_triggered(); break;
        case 59: _t->on_actionAbout_Qt_triggered(); break;
        case 60: _t->helpCopyToSourceButtonClicked(); break;
        case 61: _t->slotByteConverterDecEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 62: _t->slotByteConverterHexEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 63: _t->slotByteConverterBinEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 64: _t->slotByteConverterCharEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->mainWindowUtilities((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 66: _t->setUndoability((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->setRedoability((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->doubleClickedCodeLabel((*reinterpret_cast< Enu::EPane(*)>(_a[1]))); break;
        case 69: _t->updateSimulationView(); break;
        case 70: _t->vonNeumannStepped(); break;
        case 71: _t->appendOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 72: _t->waitingForInput(); break;
        case 73: _t->inputReceived(); break;
        case 74: _t->resumeButtonClicked(); break;
        case 75: _t->singleStepButtonClicked(); break;
        case 76: _t->openRecentFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QFont );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::fontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::colorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::fontChanged(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
