.class final Lcom/mbridge/msdk/foundation/same/report/d$1;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(ILjava/lang/String;)V
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

    .line 66
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$1;->a:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 70
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
