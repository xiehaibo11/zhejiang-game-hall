.class final Lcom/mbridge/msdk/foundation/same/report/d$3;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/io/File;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/io/File;

.field final synthetic b:Lcom/mbridge/msdk/foundation/same/report/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/d;Ljava/io/File;)V
    .locals 0

    .line 439
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$3;->b:Lcom/mbridge/msdk/foundation/same/report/d;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/d$3;->a:Ljava/io/File;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    .line 449
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report failed exception"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 442
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success exception"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 443
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$3;->a:Ljava/io/File;

    if-eqz p1, :cond_0

    .line 444
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    :cond_0
    return-void
.end method
