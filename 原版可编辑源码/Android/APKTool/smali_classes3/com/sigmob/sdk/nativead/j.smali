.class public Lcom/sigmob/sdk/nativead/j;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private a:Landroid/widget/TextView;

.field private b:Landroid/widget/TextView;

.field private c:Landroid/widget/TextView;

.field private d:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/j;->getLayoutId()I

    move-result v0

    invoke-static {p1, v0, p0}, Landroid/view/View;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/j;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "sig_app_info_ver"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/j;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/j;->a:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/j;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "sig_app_info_dev"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/j;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/j;->b:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/j;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "sig_app_info_privacy"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/j;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/j;->c:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/j;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "sig_app_info_permissions"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/j;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/j;->d:Landroid/widget/TextView;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/j;->c:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/text/TextPaint;->setFlags(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/j;->c:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object p1

    const/4 v1, 0x1

    invoke-virtual {p1, v1}, Landroid/text/TextPaint;->setAntiAlias(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/j;->d:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/text/TextPaint;->setFlags(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/j;->d:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getPaint()Landroid/text/TextPaint;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/text/TextPaint;->setAntiAlias(Z)V

    return-void
.end method

.method private getLayoutId()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/j;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_app_info_layout"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    return v0
.end method


# virtual methods
.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/j;->a:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/j;->b:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
