.class final Lcom/tkay/expressad/mbbanner/a/d/c$8;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 364
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$8;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 367
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$8;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    .line 368
    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->i(Lcom/tkay/expressad/mbbanner/a/d/c;)F

    move-result p1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$8;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->j(Lcom/tkay/expressad/mbbanner/a/d/c;)F

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->buildClickJsonObject(FF)Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$8;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    .line 367
    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/e/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    .line 369
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$8;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V

    return-void
.end method
