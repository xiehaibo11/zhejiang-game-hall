.class final Lcom/mbridge/msdk/foundation/same/report/d$14;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/entity/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/n;

.field final synthetic b:Lcom/mbridge/msdk/foundation/same/report/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/d;Lcom/mbridge/msdk/foundation/entity/n;)V
    .locals 0

    .line 266
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$14;->b:Lcom/mbridge/msdk/foundation/same/report/d;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/d$14;->a:Lcom/mbridge/msdk/foundation/entity/n;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 2

    .line 270
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$14;->a:Lcom/mbridge/msdk/foundation/entity/n;

    if-eqz p1, :cond_0

    .line 274
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$14;->a:Lcom/mbridge/msdk/foundation/entity/n;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/n;->e()I

    move-result p1

    .line 275
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/d$14;->b:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/db/q;->a(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method
