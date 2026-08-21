.class public Lorg/cocos2dx/lib/Cocos2dxEditBox;
.super Lcom/qihoo360/replugin/loader/a/PluginActivity;
.source "Cocos2dxEditBox.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;
    }
.end annotation


# static fields
.field private static final DARK_GREEN:I

.field private static final DARK_GREEN_PRESS:I

.field public static final EDITBOX_REQUEST_CODE:I = 0x2711

.field private static sThis:Lorg/cocos2dx/lib/Cocos2dxEditBox;


# instance fields
.field private mButton:Landroid/widget/Button;

.field private mButtonLayout:Landroid/widget/RelativeLayout;

.field private mButtonLayoutID:I

.field private mButtonParams:Landroid/widget/RelativeLayout$LayoutParams;

.field private mButtonTitle:Ljava/lang/String;

.field private mConfirmHold:Z

.field private mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

.field private mEditTextID:I

.field private mIsConfirmed:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "#1fa014"

    .line 61
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    sput v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->DARK_GREEN:I

    const-string v0, "#008e26"

    .line 62
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    sput v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->DARK_GREEN_PRESS:I

    const/4 v0, 0x0

    .line 66
    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->sThis:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 58
    invoke-direct {p0}, Lcom/qihoo360/replugin/loader/a/PluginActivity;-><init>()V

    const/4 v0, 0x0

    .line 67
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    .line 68
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    .line 69
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonTitle:Ljava/lang/String;

    const/4 v1, 0x1

    .line 70
    iput-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mConfirmHold:Z

    const/4 v2, 0x0

    .line 71
    iput-boolean v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mIsConfirmed:Z

    .line 72
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    .line 74
    iput v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditTextID:I

    const/4 v0, 0x2

    .line 75
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayoutID:I

    return-void
.end method

.method static synthetic access$000()I
    .locals 1

    .line 58
    sget v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->DARK_GREEN:I

    return v0
.end method

.method static synthetic access$100(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardInput(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1000(Lorg/cocos2dx/lib/Cocos2dxEditBox;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mConfirmHold:Z

    return p0
.end method

.method static synthetic access$1100()Lorg/cocos2dx/lib/Cocos2dxEditBox;
    .locals 1

    .line 58
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->sThis:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    return-object v0
.end method

.method static synthetic access$1200(Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardInputNative(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1300(Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardCompleteNative(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1400(Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardConfirmNative(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$200(Lorg/cocos2dx/lib/Cocos2dxEditBox;)Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;
    .locals 0

    .line 58
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    return-object p0
.end method

.method static synthetic access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 58
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonTitle:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$500(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V
    .locals 0

    .line 58
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->hide()V

    return-void
.end method

.method static synthetic access$802(Lorg/cocos2dx/lib/Cocos2dxEditBox;Z)Z
    .locals 0

    .line 58
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mIsConfirmed:Z

    return p1
.end method

.method static synthetic access$900(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardConfirm(Ljava/lang/String;)V

    return-void
.end method

.method private addButton(Landroid/widget/RelativeLayout;)V
    .locals 4

    .line 320
    new-instance v0, Landroid/widget/Button;

    invoke-direct {v0, p0}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    .line 321
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonParams:Landroid/widget/RelativeLayout$LayoutParams;

    .line 322
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    const/4 v2, -0x1

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setTextColor(I)V

    .line 323
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->getRoundRectShape()Landroid/graphics/drawable/Drawable;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 324
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    .line 325
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 326
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xb

    .line 328
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 329
    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditTextID:I

    const/16 v2, 0x8

    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 330
    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditTextID:I

    const/4 v2, 0x6

    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 331
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonParams:Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {v1, v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 332
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayoutID:I

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->setId(I)V

    .line 333
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 335
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private addEditText(Landroid/widget/RelativeLayout;)V
    .locals 3

    .line 309
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-direct {v0, p0, p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;Landroid/app/Activity;)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    .line 310
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setVisibility(I)V

    .line 311
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setBackgroundColor(I)V

    .line 312
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditTextID:I

    invoke-virtual {v0, v2}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setId(I)V

    .line 313
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 315
    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayoutID:I

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 316
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private addItems(Landroid/widget/RelativeLayout;)V
    .locals 4

    .line 287
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 288
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->addEditText(Landroid/widget/RelativeLayout;)V

    .line 289
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->addButton(Landroid/widget/RelativeLayout;)V

    .line 291
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xc

    .line 293
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 294
    invoke-virtual {p1, v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private closeKeyboard()V
    .locals 3

    const-string v0, "input_method"

    .line 404
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 405
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getWindowToken()Landroid/os/IBinder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    .line 407
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardComplete(Ljava/lang/String;)V

    return-void
.end method

.method private getRoundRectShape()Landroid/graphics/drawable/Drawable;
    .locals 6

    const/16 v0, 0x8

    .line 349
    new-array v0, v0, [F

    const/4 v1, 0x7

    int-to-float v2, v1

    const/4 v3, 0x0

    aput v2, v0, v3

    const/4 v4, 0x1

    aput v2, v0, v4

    const/4 v5, 0x2

    aput v2, v0, v5

    const/4 v5, 0x3

    aput v2, v0, v5

    const/4 v5, 0x4

    aput v2, v0, v5

    const/4 v5, 0x5

    aput v2, v0, v5

    const/4 v5, 0x6

    aput v2, v0, v5

    aput v2, v0, v1

    .line 350
    new-instance v1, Landroid/graphics/drawable/shapes/RoundRectShape;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2, v2}, Landroid/graphics/drawable/shapes/RoundRectShape;-><init>([FLandroid/graphics/RectF;[F)V

    .line 351
    new-instance v0, Landroid/graphics/drawable/ShapeDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/ShapeDrawable;-><init>()V

    .line 352
    invoke-virtual {v0, v1}, Landroid/graphics/drawable/ShapeDrawable;->setShape(Landroid/graphics/drawable/shapes/Shape;)V

    .line 353
    invoke-virtual {v0}, Landroid/graphics/drawable/ShapeDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object v2

    sget-object v5, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v2, v5}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 354
    invoke-virtual {v0}, Landroid/graphics/drawable/ShapeDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object v2

    sget v5, Lorg/cocos2dx/lib/Cocos2dxEditBox;->DARK_GREEN:I

    invoke-virtual {v2, v5}, Landroid/graphics/Paint;->setColor(I)V

    .line 355
    new-instance v2, Landroid/graphics/drawable/ShapeDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/ShapeDrawable;-><init>()V

    .line 356
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/ShapeDrawable;->setShape(Landroid/graphics/drawable/shapes/Shape;)V

    .line 357
    invoke-virtual {v2}, Landroid/graphics/drawable/ShapeDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object v1

    sget-object v5, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 358
    invoke-virtual {v2}, Landroid/graphics/drawable/ShapeDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object v1

    sget v5, Lorg/cocos2dx/lib/Cocos2dxEditBox;->DARK_GREEN_PRESS:I

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setColor(I)V

    .line 359
    new-instance v1, Landroid/graphics/drawable/StateListDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/StateListDrawable;-><init>()V

    .line 360
    new-array v4, v4, [I

    const v5, 0x10100a7

    aput v5, v4, v3

    invoke-virtual {v1, v4, v2}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 361
    new-array v2, v3, [I

    invoke-virtual {v1, v2, v0}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    return-object v1
.end method

.method private hide()V
    .locals 3

    .line 367
    invoke-static {}, Lorg/cocos2dx/lib/Utils;->hideVirtualButton()V

    .line 368
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    .line 369
    :goto_0
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const-string v2, "editbox_text"

    .line 370
    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 371
    iget-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mIsConfirmed:Z

    const-string v2, "editbox_confirm"

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const/4 v0, -0x1

    .line 372
    invoke-virtual {p0, v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->setResult(ILandroid/content/Intent;)V

    .line 373
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->closeKeyboard()V

    .line 374
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->finish()V

    return-void
.end method

.method private static hideNative()V
    .locals 2

    .line 437
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->sThis:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    if-eqz v0, :cond_0

    .line 438
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxEditBox$3;

    invoke-direct {v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$3;-><init>()V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private onKeyboardComplete(Ljava/lang/String;)V
    .locals 1

    .line 460
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$5;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$5;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->runOnGLThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static onKeyboardCompleteCallback(Ljava/lang/String;)V
    .locals 0

    .line 486
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardCompleteNative(Ljava/lang/String;)V

    return-void
.end method

.method private static native onKeyboardCompleteNative(Ljava/lang/String;)V
.end method

.method private onKeyboardConfirm(Ljava/lang/String;)V
    .locals 1

    .line 469
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$6;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$6;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->runOnGLThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static onKeyboardConfirmCallback(Ljava/lang/String;)V
    .locals 0

    .line 490
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardConfirmNative(Ljava/lang/String;)V

    return-void
.end method

.method private static native onKeyboardConfirmNative(Ljava/lang/String;)V
.end method

.method private onKeyboardInput(Ljava/lang/String;)V
    .locals 1

    .line 451
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$4;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$4;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)V

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxHelper;->runOnGLThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static onKeyboardInputCallback(Ljava/lang/String;)V
    .locals 0

    .line 482
    invoke-static {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->onKeyboardInputNative(Ljava/lang/String;)V

    return-void
.end method

.method private static native onKeyboardInputNative(Ljava/lang/String;)V
.end method

.method private openKeyboard()V
    .locals 3

    const-string v0, "input_method"

    .line 411
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 412
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->showSoftInput(Landroid/view/View;I)Z

    return-void
.end method

.method private static showNative(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 421
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v8, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;

    move-object v1, v8

    move-object v2, p0

    move v3, p1

    move v4, p2

    move v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-direct/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxEditBox$2;-><init>(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v8}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 0

    .line 379
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->hide()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8

    .line 256
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/loader/a/PluginActivity;->onCreate(Landroid/os/Bundle;)V

    .line 258
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x10

    invoke-virtual {p1, v0}, Landroid/view/Window;->setSoftInputMode(I)V

    .line 259
    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->sThis:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    .line 261
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 264
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 265
    invoke-virtual {v0, p1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 266
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->setContentView(Landroid/view/View;)V

    .line 268
    invoke-direct {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->addItems(Landroid/widget/RelativeLayout;)V

    .line 270
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    const-string v0, "defaultValue"

    .line 271
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v0, "maxLength"

    .line 272
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v3

    const-string v0, "isMultiline"

    .line 273
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v4

    const-string v0, "confirmHold"

    .line 274
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v5

    const-string v0, "confirmType"

    .line 275
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v0, "inputType"

    .line 276
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    move-object v1, p0

    .line 271
    invoke-virtual/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->show(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public show(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 383
    iput-boolean p4, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mConfirmHold:Z

    .line 384
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    move-object v1, p1

    move v2, p2

    move v3, p3

    move v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-virtual/range {v0 .. v6}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->show(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V

    .line 385
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getPaddingBottom()I

    move-result p1

    .line 386
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {p2}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getPaddingTop()I

    move-result p2

    .line 387
    iget-object p3, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {p3, p2, p2, p2, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setPadding(IIII)V

    .line 388
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    iget-object p3, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonTitle:Ljava/lang/String;

    invoke-virtual {p1, p3}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 389
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonTitle:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 p3, 0x0

    if-eqz p1, :cond_0

    .line 390
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    invoke-virtual {p1, p3, p3, p3, p3}, Landroid/widget/Button;->setPadding(IIII)V

    .line 391
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonParams:Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p1, p3, p3, p3, p3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 392
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    const/4 p2, 0x4

    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    goto :goto_0

    .line 394
    :cond_0
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mEditText:Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    invoke-virtual {p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getPaddingBottom()I

    move-result p1

    div-int/lit8 p1, p1, 0x2

    .line 395
    iget-object p4, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButton:Landroid/widget/Button;

    invoke-virtual {p4, p2, p1, p2, p1}, Landroid/widget/Button;->setPadding(IIII)V

    .line 396
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonParams:Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p2, p3, p1, p3, p3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 397
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox;->mButtonLayout:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, p3}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 400
    :goto_0
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->openKeyboard()V

    return-void
.end method
