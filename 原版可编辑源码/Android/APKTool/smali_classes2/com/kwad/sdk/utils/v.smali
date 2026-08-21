.class public final Lcom/kwad/sdk/utils/v;
.super Ljava/lang/Object;


# static fields
.field private static volatile GX:Z

.field private static mHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/sdk/utils/v;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x0

    sput-boolean v0, Lcom/kwad/sdk/utils/v;->GX:Z

    return-void
.end method

.method public static L(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_content_alliance_toast_2:I

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/utils/v;->c(Landroid/content/Context;Ljava/lang/String;I)V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;IJ)V
    .locals 1

    sget-object v0, Lcom/kwad/framework/a/a;->aaf:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget-boolean v0, Lcom/kwad/sdk/utils/v;->GX:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/utils/v;->GX:Z

    const/4 v0, 0x0

    invoke-static {p0, p2, v0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$id;->ksad_message_toast_txt:I

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    new-instance p1, Landroid/widget/Toast;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {p1, p0}, Landroid/widget/Toast;-><init>(Landroid/content/Context;)V

    const/16 p0, 0x11

    const/4 v0, 0x0

    invoke-virtual {p1, p0, v0, v0}, Landroid/widget/Toast;->setGravity(III)V

    invoke-virtual {p1, v0}, Landroid/widget/Toast;->setDuration(I)V

    invoke-virtual {p1, p2}, Landroid/widget/Toast;->setView(Landroid/view/View;)V

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    sget-object p0, Lcom/kwad/sdk/utils/v;->mHandler:Landroid/os/Handler;

    new-instance p1, Lcom/kwad/sdk/utils/v$1;

    invoke-direct {p1}, Lcom/kwad/sdk/utils/v$1;-><init>()V

    invoke-virtual {p0, p1, p3, p4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    const/4 p0, 0x0

    sput-boolean p0, Lcom/kwad/sdk/utils/v;->GX:Z

    return p0
.end method

.method private static c(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 2

    const-wide/16 v0, 0x320

    invoke-static {p0, p1, p2, v0, v1}, Lcom/kwad/sdk/utils/v;->a(Landroid/content/Context;Ljava/lang/String;IJ)V

    return-void
.end method

.method public static c(Landroid/content/Context;Ljava/lang/String;J)V
    .locals 2

    sget p2, Lcom/kwad/sdk/R$layout;->ksad_content_alliance_toast_2:I

    const-wide/16 v0, 0x0

    invoke-static {p0, p1, p2, v0, v1}, Lcom/kwad/sdk/utils/v;->a(Landroid/content/Context;Ljava/lang/String;IJ)V

    return-void
.end method

.method public static d(Landroid/content/Context;Ljava/lang/String;I)V
    .locals 2

    sget-object p2, Lcom/kwad/framework/a/a;->aaf:Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-nez p2, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_content_alliance_toast:I

    const/4 v1, 0x0

    invoke-virtual {p2, v0, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    sget v0, Lcom/kwad/sdk/R$id;->ksad_message_toast_txt:I

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    new-instance p1, Landroid/widget/Toast;

    invoke-direct {p1, p0}, Landroid/widget/Toast;-><init>(Landroid/content/Context;)V

    const/16 p0, 0x11

    const/4 v0, 0x0

    invoke-virtual {p1, p0, v0, v0}, Landroid/widget/Toast;->setGravity(III)V

    invoke-virtual {p1, v0}, Landroid/widget/Toast;->setDuration(I)V

    invoke-virtual {p1, p2}, Landroid/widget/Toast;->setView(Landroid/view/View;)V

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    return-void
.end method

.method public static d(Landroid/content/Context;Ljava/lang/String;J)V
    .locals 2

    sget p2, Lcom/kwad/sdk/R$layout;->ksad_toast_corner:I

    const-wide/16 v0, 0x0

    invoke-static {p0, p1, p2, v0, v1}, Lcom/kwad/sdk/utils/v;->a(Landroid/content/Context;Ljava/lang/String;IJ)V

    return-void
.end method
