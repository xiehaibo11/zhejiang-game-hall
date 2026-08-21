.class public Lcom/kwad/components/core/widget/KsAutoCloseView;
.super Landroid/widget/LinearLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/widget/KsAutoCloseView$a;
    }
.end annotation


# static fields
.field private static AZ:Ljava/lang/String; = "%s\u79d2\u540e\u81ea\u52a8\u5173\u95ed"


# instance fields
.field private YP:Landroid/widget/TextView;

.field private YQ:Landroid/widget/ImageView;

.field private YR:Lcom/kwad/components/core/widget/KsAutoCloseView$a;

.field private YS:Z

.field private YT:Z

.field private countDown:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/16 v0, 0xa

    iput v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->R(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/16 p2, 0xa

    iput p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->R(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p2, 0xa

    iput p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->R(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const/16 p2, 0xa

    iput p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->R(Landroid/content/Context;)V

    return-void
.end method

.method private R(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_auto_close:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_auto_close_text:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YP:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_auto_close_btn:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YQ:Landroid/widget/ImageView;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/widget/KsAutoCloseView;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->w(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/widget/KsAutoCloseView;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/core/widget/KsAutoCloseView;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/core/widget/KsAutoCloseView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/core/widget/KsAutoCloseView;)Lcom/kwad/components/core/widget/KsAutoCloseView$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YR:Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/core/widget/KsAutoCloseView;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    return v0
.end method

.method private w(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YP:Landroid/widget/TextView;

    sget-object v1, Lcom/kwad/components/core/widget/KsAutoCloseView;->AZ:Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public final V(I)V
    .locals 0

    if-gtz p1, :cond_0

    return-void

    :cond_0
    iput p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->countDown:I

    new-instance p1, Lcom/kwad/components/core/widget/KsAutoCloseView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/widget/KsAutoCloseView$1;-><init>(Lcom/kwad/components/core/widget/KsAutoCloseView;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final aR(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YS:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/16 p1, 0x8

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YP:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YR:Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YQ:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YR:Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    invoke-interface {p1}, Lcom/kwad/components/core/widget/KsAutoCloseView$a;->dJ()V

    :cond_1
    return-void
.end method

.method public setCountDownPaused(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YT:Z

    return-void
.end method

.method public setViewListener(Lcom/kwad/components/core/widget/KsAutoCloseView$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView;->YR:Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    return-void
.end method
