.class Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;
.super Landroid/widget/EditText;
.source "Cocos2dxEditBox.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxEditBox;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "Cocos2dxEditText"
.end annotation


# instance fields
.field private final TAG:Ljava/lang/String;

.field private keyboardVisible:Z

.field private mIsMultiLine:Z

.field private mLineColor:I

.field private mLineWidth:F

.field private mPaint:Landroid/graphics/Paint;

.field private mScreenHeight:I

.field private mTextWatcher:Landroid/text/TextWatcher;

.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;


# direct methods
.method public constructor <init>(Lorg/cocos2dx/lib/Cocos2dxEditBox;Landroid/app/Activity;)V
    .locals 3

    .line 90
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    .line 91
    invoke-direct {p0, p2}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    const-string v0, "Cocos2dxEditBox"

    .line 81
    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->TAG:Ljava/lang/String;

    const/4 v0, 0x0

    .line 82
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mIsMultiLine:Z

    const/4 v1, 0x0

    .line 83
    iput-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mTextWatcher:Landroid/text/TextWatcher;

    .line 85
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$000()I

    move-result v2

    iput v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineColor:I

    const/high16 v2, 0x40000000    # 2.0f

    .line 86
    iput v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineWidth:F

    .line 87
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->keyboardVisible:Z

    .line 93
    invoke-virtual {p0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setBackground(Landroid/graphics/drawable/Drawable;)V

    const/high16 v0, -0x1000000

    .line 94
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setTextColor(I)V

    const-string v0, "window"

    .line 95
    invoke-virtual {p2, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/WindowManager;

    .line 96
    invoke-interface {p2}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/Display;->getHeight()I

    move-result p2

    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mScreenHeight:I

    .line 97
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mPaint:Landroid/graphics/Paint;

    .line 98
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mPaint:Landroid/graphics/Paint;

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineWidth:F

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 99
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mPaint:Landroid/graphics/Paint;

    sget-object v0, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 100
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mPaint:Landroid/graphics/Paint;

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineColor:I

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setColor(I)V

    .line 102
    new-instance p2, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$1;

    invoke-direct {p2, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;Lorg/cocos2dx/lib/Cocos2dxEditBox;)V

    iput-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mTextWatcher:Landroid/text/TextWatcher;

    .line 119
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->registKeyboardVisible()V

    return-void
.end method

.method static synthetic access$400(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)Z
    .locals 0

    .line 80
    iget-boolean p0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mIsMultiLine:Z

    return p0
.end method

.method static synthetic access$600(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)I
    .locals 0

    .line 80
    iget p0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mScreenHeight:I

    return p0
.end method

.method static synthetic access$700(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)Z
    .locals 0

    .line 80
    iget-boolean p0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->keyboardVisible:Z

    return p0
.end method

.method static synthetic access$702(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;Z)Z
    .locals 0

    .line 80
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->keyboardVisible:Z

    return p1
.end method

.method private addListeners()V
    .locals 1

    .line 211
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$2;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    .line 223
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mTextWatcher:Landroid/text/TextWatcher;

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    return-void
.end method

.method private registKeyboardVisible()V
    .locals 2

    .line 232
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText$3;-><init>(Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method

.method private removeListeners()V
    .locals 1

    const/4 v0, 0x0

    .line 227
    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    .line 228
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mTextWatcher:Landroid/text/TextWatcher;

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->removeTextChangedListener(Landroid/text/TextWatcher;)V

    return-void
.end method

.method private setConfirmType(Ljava/lang/String;)V
    .locals 2

    const-string v0, "done"

    .line 169
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const p1, 0x10000006

    .line 170
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setImeOptions(I)V

    .line 171
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const-string v0, "\u5b8c\u6210"

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    goto/16 :goto_0

    :cond_0
    const-string v0, "next"

    .line 172
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const p1, 0x10000005

    .line 173
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setImeOptions(I)V

    .line 174
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const-string v0, "\u4e0b\u4e00\u4e2a"

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    :cond_1
    const-string v0, "search"

    .line 175
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const p1, 0x10000003

    .line 176
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setImeOptions(I)V

    .line 177
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const-string v0, "\u641c\u7d22"

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    :cond_2
    const-string v0, "go"

    .line 178
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const p1, 0x10000002

    .line 179
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setImeOptions(I)V

    .line 180
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const-string v0, "\u524d\u5f80"

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    :cond_3
    const-string v0, "send"

    .line 181
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const p1, 0x10000004

    .line 182
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setImeOptions(I)V

    .line 183
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const-string v0, "\u53d1\u9001"

    invoke-static {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 185
    :cond_4
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$302(Lorg/cocos2dx/lib/Cocos2dxEditBox;Ljava/lang/String;)Ljava/lang/String;

    .line 186
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unknown confirm type "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "Cocos2dxEditBox"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private setInputType(Ljava/lang/String;Z)V
    .locals 1

    const-string v0, "text"

    .line 191
    invoke-virtual {p1, v0}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p2, :cond_0

    const p1, 0x20001

    .line 193
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 195
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    :cond_1
    const-string p2, "email"

    .line 197
    invoke-virtual {p1, p2}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    const/16 p1, 0x20

    .line 198
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    :cond_2
    const-string p2, "number"

    .line 199
    invoke-virtual {p1, p2}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    const/16 p1, 0x3002

    .line 200
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    :cond_3
    const-string p2, "phone"

    .line 201
    invoke-virtual {p1, p2}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    const/4 p1, 0x3

    .line 202
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    :cond_4
    const-string p2, "password"

    .line 203
    invoke-virtual {p1, p2}, Ljava/lang/String;->contentEquals(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_5

    const/16 p1, 0x81

    .line 204
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(I)V

    goto :goto_0

    .line 206
    :cond_5
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "unknown input type "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Cocos2dxEditBox"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method


# virtual methods
.method public hide()V
    .locals 2

    .line 160
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->this$0:Lorg/cocos2dx/lib/Cocos2dxEditBox;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxEditBox;->access$200(Lorg/cocos2dx/lib/Cocos2dxEditBox;)Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setVisibility(I)V

    .line 161
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->removeListeners()V

    return-void
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 8

    .line 129
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getPaddingBottom()I

    move-result v0

    .line 130
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getScrollX()I

    move-result v1

    int-to-float v3, v1

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getHeight()I

    move-result v1

    div-int/lit8 v0, v0, 0x2

    sub-int/2addr v1, v0

    int-to-float v1, v1

    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineWidth:F

    sub-float v4, v1, v2

    .line 131
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getScrollX()I

    move-result v1

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getWidth()I

    move-result v2

    add-int/2addr v1, v2

    int-to-float v5, v1

    .line 132
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getHeight()I

    move-result v1

    sub-int/2addr v1, v0

    int-to-float v0, v1

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mLineWidth:F

    sub-float v6, v0, v1

    iget-object v7, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mPaint:Landroid/graphics/Paint;

    move-object v2, p1

    .line 130
    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 133
    invoke-super {p0, p1}, Landroid/widget/EditText;->onDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public show(Ljava/lang/String;IZZLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 141
    iput-boolean p3, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mIsMultiLine:Z

    const/4 p3, 0x1

    .line 142
    new-array p3, p3, [Landroid/text/InputFilter;

    new-instance p4, Landroid/text/InputFilter$LengthFilter;

    invoke-direct {p4, p2}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    const/4 p2, 0x0

    aput-object p4, p3, p2

    invoke-virtual {p0, p3}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setFilters([Landroid/text/InputFilter;)V

    .line 143
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setText(Ljava/lang/CharSequence;)V

    .line 144
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getText()Landroid/text/Editable;

    move-result-object p3

    invoke-interface {p3}, Landroid/text/Editable;->length()I

    move-result p3

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p4

    if-lt p3, p4, :cond_0

    .line 145
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setSelection(I)V

    goto :goto_0

    .line 147
    :cond_0
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->getText()Landroid/text/Editable;

    move-result-object p1

    invoke-interface {p1}, Landroid/text/Editable;->length()I

    move-result p1

    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setSelection(I)V

    .line 149
    :goto_0
    invoke-direct {p0, p5}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setConfirmType(Ljava/lang/String;)V

    .line 150
    iget-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->mIsMultiLine:Z

    invoke-direct {p0, p6, p1}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setInputType(Ljava/lang/String;Z)V

    .line 151
    invoke-virtual {p0, p2}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->setVisibility(I)V

    .line 154
    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->requestFocus()Z

    .line 156
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxEditBox$Cocos2dxEditText;->addListeners()V

    return-void
.end method
