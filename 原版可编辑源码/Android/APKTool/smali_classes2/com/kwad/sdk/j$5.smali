.class final Lcom/kwad/sdk/j$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/service/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/j;->xo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final C(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorMsg:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\nurl:"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "image_load_failed_info"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final ab(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    const/16 v1, 0x520f

    invoke-virtual {v0, p1, v1}, Lcom/kwad/components/core/o/a;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method

.method public final e(Lorg/json/JSONObject;I)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/o/a;->e(Lorg/json/JSONObject;I)V

    return-void
.end method

.method public final xq()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/o/a;->ai(Landroid/content/Context;)V

    return-void
.end method
