.class final Lcom/mbridge/msdk/foundation/same/report/d$12;
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

    .line 140
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->a:Lcom/mbridge/msdk/foundation/entity/n;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->b:Ljava/lang/Boolean;

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

    .line 144
    sget-object p1, Lcom/mbridge/msdk/foundation/same/report/d;->a:Ljava/lang/String;

    const-string v0, "report success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 146
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->a:Lcom/mbridge/msdk/foundation/entity/n;

    .line 147
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/n;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/db/o;->a(Ljava/lang/String;)I

    .line 148
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->b:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 149
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/report/d$12;->c:Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/same/report/d;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object p1

    .line 150
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/o;->b()I

    move-result p1

    const/16 v0, 0x14

    if-le p1, v0, :cond_0

    .line 152
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    :cond_0
    return-void
.end method
