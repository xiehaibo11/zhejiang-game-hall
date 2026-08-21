.class Lcom/sigmob/sdk/nativead/u$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/q$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/u$4;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/u$4;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/u$4;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Z)Z

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v2, "template"

    iput-object v2, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/u;->a()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->g:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v0, v2, v1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "btn"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "appinfo"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    invoke-virtual {v0, v2, p1, p2, v1}, Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object p1, p1, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    const-string p2, "com.sigmob.action.native.temple.click"

    invoke-static {p1, p2}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4$1;->a:Lcom/sigmob/sdk/nativead/u$4;

    iget-object v0, v0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/u;->a()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->f:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method
