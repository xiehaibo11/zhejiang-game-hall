.class public Lcom/kwad/components/core/widget/ComplianceTextView;
.super Landroid/widget/TextView;


# instance fields
.field private XW:Ljava/lang/String;

.field private XX:Ljava/lang/String;

.field private XY:Ljava/lang/String;

.field private XZ:Ljava/lang/String;

.field private Ya:Ljava/lang/String;

.field private Yb:I

.field private Yc:Ljava/lang/String;

.field private Yd:I

.field private Ye:Z

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/widget/ComplianceTextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/core/widget/ComplianceTextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p3, 0x9a

    iput p3, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yb:I

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/widget/ComplianceTextView;->init(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XW:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/widget/ComplianceTextView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/core/widget/ComplianceTextView;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 p1, 0x8

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    :cond_1
    const-string v1, "  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, " | "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    if-nez v1, :cond_6

    iget v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yb:I

    goto :goto_0

    :cond_6
    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getWidth()I

    move-result v1

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaddingLeft()I

    move-result v2

    sub-int/2addr v1, v2

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaddingRight()I

    move-result v2

    sub-int/2addr v1, v2

    if-gez v1, :cond_7

    return-void

    :cond_7
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->a(Ljava/lang/String;Ljava/lang/String;I)Z

    move-result v0

    if-eqz v0, :cond_8

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    goto :goto_1

    :cond_8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "   "

    :goto_1
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yc:Ljava/lang/String;

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/core/widget/ComplianceTextView;->l(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->requestLayout()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;I)Z
    .locals 12

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v0, 0x0

    const/16 v1, 0x17

    if-lt p2, v1, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p2

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v1

    invoke-static {p1, v0, p2, v1, p3}, Landroid/text/StaticLayout$Builder;->obtain(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)Landroid/text/StaticLayout$Builder;

    move-result-object p1

    invoke-virtual {p1}, Landroid/text/StaticLayout$Builder;->build()Landroid/text/StaticLayout;

    move-result-object p1

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result p2

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v1

    invoke-static {v2, v0, p2, v1, p3}, Landroid/text/StaticLayout$Builder;->obtain(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)Landroid/text/StaticLayout$Builder;

    move-result-object p2

    invoke-virtual {p2}, Landroid/text/StaticLayout$Builder;->build()Landroid/text/StaticLayout;

    move-result-object p2

    goto :goto_0

    :cond_0
    new-instance p2, Landroid/text/StaticLayout;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v5

    sget-object v7, Landroid/text/Layout$Alignment;->ALIGN_NORMAL:Landroid/text/Layout$Alignment;

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x1

    move-object v3, p2

    move-object v4, p1

    move v6, p3

    invoke-direct/range {v3 .. v10}, Landroid/text/StaticLayout;-><init>(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V

    new-instance p1, Landroid/text/StaticLayout;

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v3

    sget-object v5, Landroid/text/Layout$Alignment;->ALIGN_NORMAL:Landroid/text/Layout$Alignment;

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x1

    move-object v1, p1

    move v4, p3

    invoke-direct/range {v1 .. v8}, Landroid/text/StaticLayout;-><init>(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V

    move-object v11, p2

    move-object p2, p1

    move-object p1, v11

    :goto_0
    invoke-virtual {p2}, Landroid/text/StaticLayout;->getLineCount()I

    move-result p2

    invoke-virtual {p1}, Landroid/text/StaticLayout;->getLineCount()I

    move-result p1

    if-le p2, p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v0
.end method

.method static synthetic b(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XX:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XY:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/widget/ComplianceTextView;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/widget/ComplianceTextView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yd:I

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/core/widget/ComplianceTextView;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ye:Z

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    return-object p0
.end method

.method private init(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/R$styleable;->ksad_ComplianceTextView:[I

    invoke-virtual {p1, p2, v0}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$styleable;->ksad_ComplianceTextView_ksad_width_in_landscape:I

    const/16 v1, 0x9a

    invoke-virtual {p2, v0, v1}, Landroid/content/res/TypedArray;->getDimensionPixelOffset(II)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yb:I

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$color;->ksad_default_privacy_link_color:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getColor(I)I

    move-result v0

    sget v1, Lcom/kwad/sdk/R$styleable;->ksad_ComplianceTextView_ksad_privacy_color:I

    invoke-virtual {p2, v1, v0}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yd:I

    sget v0, Lcom/kwad/sdk/R$styleable;->ksad_ComplianceTextView_ksad_show_clickable_underline:I

    const/4 v1, 0x1

    invoke-virtual {p2, v0, v1}, Landroid/content/res/TypedArray;->getBoolean(IZ)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ye:Z

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-nez v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$drawable;->ksad_compliance_view_bg:I

    invoke-static {p1, v0}, Landroid/support/v4/content/ContextCompat;->getDrawable(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_0
    invoke-virtual {p2}, Landroid/content/res/TypedArray;->recycle()V

    return-void
.end method

.method private l(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    new-instance v0, Landroid/text/SpannableStringBuilder;

    invoke-direct {v0}, Landroid/text/SpannableStringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    iget-object v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v2, 0x21

    if-nez v1, :cond_0

    invoke-virtual {v0}, Landroid/text/SpannableStringBuilder;->length()I

    move-result v1

    invoke-virtual {v0, p1}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    new-instance v3, Lcom/kwad/components/core/widget/ComplianceTextView$2;

    invoke-direct {v3, p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView$2;-><init>(Lcom/kwad/components/core/widget/ComplianceTextView;Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/text/SpannableStringBuilder;->length()I

    move-result p1

    invoke-virtual {v0, v3, v1, p1, v2}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    const-string p1, " | "

    invoke-virtual {v0, p1}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-virtual {v0}, Landroid/text/SpannableStringBuilder;->length()I

    move-result p1

    invoke-virtual {v0, p2}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    new-instance v1, Lcom/kwad/components/core/widget/ComplianceTextView$3;

    invoke-direct {v1, p0, p2}, Lcom/kwad/components/core/widget/ComplianceTextView$3;-><init>(Lcom/kwad/components/core/widget/ComplianceTextView;Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/text/SpannableStringBuilder;->length()I

    move-result p2

    invoke-virtual {v0, v1, p1, p2, v2}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    :cond_2
    const-string p1, " "

    invoke-virtual {v0, p1}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    invoke-static {}, Landroid/text/method/LinkMovementMethod;->getInstance()Landroid/text/method/MovementMethod;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setMovementMethod(Landroid/text/method/MovementMethod;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getContext()Landroid/content/Context;

    move-result-object p1

    sget p2, Lcom/kwad/sdk/R$color;->ksad_translucent:I

    invoke-static {p1, p2}, Landroid/support/v4/content/ContextCompat;->getColor(Landroid/content/Context;I)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setHighlightColor(I)V

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/widget/ComplianceTextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 7

    iput-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, " "

    if-nez v1, :cond_0

    const-string v1, "\u5e94\u7528\u540d\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "\u7248\u672c\u53f7\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-wide v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const-wide/16 v5, 0x0

    cmp-long v1, v3, v5

    if-lez v1, :cond_2

    const-string v1, "\u5e94\u7528\u5927\u5c0f\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-wide v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->packageSize:J

    const/4 v1, 0x1

    invoke-static {v3, v4, v1}, Lcom/kwad/components/core/t/e;->a(JZ)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "\u5f00\u53d1\u8005\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->corporationName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XW:Ljava/lang/String;

    const-string v0, "\u6743\u9650\u4fe1\u606f"

    iput-object v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XX:Ljava/lang/String;

    const-string v0, "\u9690\u79c1\u653f\u7b56"

    iput-object v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XY:Ljava/lang/String;

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->XZ:Ljava/lang/String;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Ya:Ljava/lang/String;

    iget p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yb:I

    if-lez p1, :cond_5

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/core/widget/ComplianceTextView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/core/widget/ComplianceTextView;->Yb:I

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    goto :goto_0

    :cond_4
    const/4 v0, -0x1

    :goto_0
    iput v0, p1, Landroid/view/ViewGroup$LayoutParams;->width:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_5
    new-instance p1, Lcom/kwad/components/core/widget/ComplianceTextView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/widget/ComplianceTextView$1;-><init>(Lcom/kwad/components/core/widget/ComplianceTextView;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
