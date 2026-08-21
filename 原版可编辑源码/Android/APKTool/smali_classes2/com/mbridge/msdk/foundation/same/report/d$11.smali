.class final Lcom/mbridge/msdk/foundation/same/report/d$11;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/same/report/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/d;)V
    .locals 0

    .line 932
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$11;->a:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    const-string p1, ""

    const-string v0, "OMSDK REPORT FAILED"

    .line 940
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    const-string p1, ""

    const-string v0, "OMSDK REPORT SUCCESS"

    .line 935
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
