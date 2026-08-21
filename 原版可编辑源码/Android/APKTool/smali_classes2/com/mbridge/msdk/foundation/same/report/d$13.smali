.class final Lcom/mbridge/msdk/foundation/same/report/d$13;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "ReportController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/entity/n;Ljava/lang/Boolean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/n;

.field final synthetic b:Ljava/lang/Boolean;

.field final synthetic c:Lcom/mbridge/msdk/foundation/same/report/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/same/report/d;Lcom/mbridge/msdk/foundation/entity/n;Ljava/lang/Boolean;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->a:Lcom/mbridge/msdk/foundation/entity/n;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->b:Ljava/lang/Boolean;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 1

    .line 193
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->a:Lcom/mbridge/msdk/foundation/entity/n;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/entity/n;)J

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 4

    .line 177
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->a:Lcom/mbridge/msdk/foundation/entity/n;

    .line 180
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/n;->d()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->a:Lcom/mbridge/msdk/foundation/entity/n;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/n;->b()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->a:Lcom/mbridge/msdk/foundation/entity/n;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/n;->g()J

    move-result-wide v2

    invoke-virtual {p1, v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/db/o;->a(Ljava/lang/String;Ljava/lang/String;J)I

    .line 181
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->b:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 182
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$13;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object p1

    .line 183
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/o;->a()I

    move-result p1

    if-lez p1, :cond_0

    .line 185
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    :cond_0
    return-void
.end method
