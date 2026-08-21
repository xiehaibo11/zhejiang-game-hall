.class public final Lcom/mbridge/msdk/foundation/same/f/a;
.super Ljava/lang/Object;
.source "ReportTask.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/f/a;->a:Ljava/lang/String;

    .line 32
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/f/a;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    const-string v0, "ReportTask"

    :try_start_0
    const-string v1, "start report"

    .line 38
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d/a;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d/a;-><init>(Landroid/content/Context;)V

    .line 40
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/f/a;->a:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/foundation/same/f/a;->b:Ljava/lang/String;

    invoke-static {v2, v3, v4}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v2

    const/4 v3, 0x0

    .line 41
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v4

    iget-object v4, v4, Lcom/mbridge/msdk/foundation/same/net/f/d;->a:Ljava/lang/String;

    new-instance v5, Lcom/mbridge/msdk/foundation/same/f/a$1;

    invoke-direct {v5, p0}, Lcom/mbridge/msdk/foundation/same/f/a$1;-><init>(Lcom/mbridge/msdk/foundation/same/f/a;)V

    invoke-virtual {v1, v3, v4, v2, v5}, Lcom/mbridge/msdk/foundation/same/report/d/a;->post(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 59
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
