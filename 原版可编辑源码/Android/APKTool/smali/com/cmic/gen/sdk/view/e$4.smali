.class Lcom/cmic/gen/sdk/view/e$4;
.super Landroid/text/style/ClickableSpan;
.source "UmcActivityUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/view/d;Ljava/util/ArrayList;Ljava/util/ArrayList;)Landroid/text/SpannableString;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/ArrayList;


# direct methods
.method constructor <init>(Landroid/content/Context;Ljava/util/ArrayList;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/e$4;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/cmic/gen/sdk/view/e$4;->b:Ljava/util/ArrayList;

    invoke-direct {p0}, Landroid/text/style/ClickableSpan;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 172
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/e$4;->b:Ljava/util/ArrayList;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/cmic/gen/sdk/view/e$4;->b:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/d;->isShowing()Z

    move-result p1

    if-nez p1, :cond_0

    .line 173
    iget-object p1, p0, Lcom/cmic/gen/sdk/view/e$4;->b:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/cmic/gen/sdk/view/d;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/view/d;->show()V

    :cond_0
    return-void
.end method

.method public updateDrawState(Landroid/text/TextPaint;)V
    .locals 1

    .line 161
    invoke-super {p0, p1}, Landroid/text/style/ClickableSpan;->updateDrawState(Landroid/text/TextPaint;)V

    const/4 v0, 0x0

    .line 162
    invoke-virtual {p1, v0}, Landroid/text/TextPaint;->setUnderlineText(Z)V

    .line 164
    :try_start_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/e$4;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseColor()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/text/TextPaint;->setColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const v0, -0xf441fa

    .line 166
    invoke-virtual {p1, v0}, Landroid/text/TextPaint;->setColor(I)V

    :goto_0
    return-void
.end method
