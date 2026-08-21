.class final Lcom/mbridge/msdk/foundation/same/report/d$4;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/out/Frame;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/foundation/same/report/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/d;Ljava/lang/String;)V
    .locals 0

    .line 463
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$4;->b:Lcom/mbridge/msdk/foundation/same/report/d;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/d$4;->a:Ljava/lang/String;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    .line 487
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report failed"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 467
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 468
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$4;->a:Ljava/lang/String;

    const-string v0, "net_time_stats"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 473
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$4;->a:Ljava/lang/String;

    const-string v0, "click_duration"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 474
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    goto :goto_0

    .line 475
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$4;->a:Ljava/lang/String;

    const-string v0, "load_duration"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 476
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    .line 480
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    :cond_2
    :goto_0
    return-void
.end method
