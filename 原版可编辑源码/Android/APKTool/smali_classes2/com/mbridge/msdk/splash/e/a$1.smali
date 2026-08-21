.class final Lcom/mbridge/msdk/splash/e/a$1;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "SplashReport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/e/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 169
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    const-string p1, ""

    const-string v0, "Mraid Expand REPORT FAILED"

    .line 177
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    const-string p1, ""

    const-string v0, "Mraid Expand REPORT SUCCESS"

    .line 172
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
