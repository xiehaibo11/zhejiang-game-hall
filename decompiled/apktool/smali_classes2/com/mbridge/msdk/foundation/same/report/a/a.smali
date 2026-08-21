.class public final Lcom/mbridge/msdk/foundation/same/report/a/a;
.super Ljava/lang/Object;
.source "CampaignRequestTimeUtil.java"


# instance fields
.field private a:Lcom/mbridge/msdk/foundation/entity/j;

.field private b:Lcom/mbridge/msdk/foundation/db/i;

.field private c:Landroid/content/Context;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/j;)V
    .locals 2

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 14
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->b:Lcom/mbridge/msdk/foundation/db/i;

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    .line 21
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->c:Landroid/content/Context;

    .line 22
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->b:Lcom/mbridge/msdk/foundation/db/i;

    .line 23
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->c:Landroid/content/Context;

    if-eqz p1, :cond_0

    .line 24
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->e(I)V

    .line 26
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->c:Landroid/content/Context;

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->c(Ljava/lang/String;)V

    .line 27
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/j;->d(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->b:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/m;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/m;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/m;->a(Lcom/mbridge/msdk/foundation/entity/j;)V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz v0, :cond_0

    .line 41
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->b(I)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 33
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 34
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b(I)V
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->c(I)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz v0, :cond_0

    .line 66
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final c(I)V
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/a/a;->a:Lcom/mbridge/msdk/foundation/entity/j;

    if-eqz v0, :cond_0

    .line 71
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/j;->a(I)V

    :cond_0
    return-void
.end method
