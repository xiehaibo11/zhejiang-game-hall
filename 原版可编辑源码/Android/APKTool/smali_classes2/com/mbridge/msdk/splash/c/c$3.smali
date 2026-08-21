.class final Lcom/mbridge/msdk/splash/c/c$3;
.super Lcom/mbridge/msdk/splash/f/a;
.source "SplashLoadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/c;->a(Landroid/content/Context;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;ILjava/lang/String;I)V
    .locals 0

    .line 282
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/c$3;->a:Ljava/lang/String;

    iput p4, p0, Lcom/mbridge/msdk/splash/c/c$3;->b:I

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/splash/f/a;-><init>(I)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 3

    .line 302
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onLoadCompaginFailed load failed errorCode:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " msg:"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 304
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$3;->a:Ljava/lang/String;

    iget v1, p0, Lcom/mbridge/msdk/splash/c/c$3;->b:I

    invoke-static {p1, p2, v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    .line 305
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/c;->d(Lcom/mbridge/msdk/splash/c/c;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;I)V
    .locals 3

    .line 288
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object v0

    const-string v1, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u56de\u6765"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 290
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v1}, Lcom/mbridge/msdk/splash/c/c;->c(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c$3;->a:Ljava/lang/String;

    invoke-static {v0, p1, p2, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;ILjava/lang/String;Ljava/lang/String;)V

    .line 291
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 293
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 294
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u5931\u8d25\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$3;->a:Ljava/lang/String;

    const-string v1, "Exception after load success"

    invoke-static {p1, v1, v0, p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    .line 296
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$3;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/c;->d(Lcom/mbridge/msdk/splash/c/c;)V

    :goto_0
    return-void
.end method
