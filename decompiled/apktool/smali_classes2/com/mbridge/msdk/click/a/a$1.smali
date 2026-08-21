.class final Lcom/mbridge/msdk/click/a/a$1;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "RetryReportControl.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/a/a;->a(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;


# direct methods
.method constructor <init>(Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/mbridge/msdk/click/a/a$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/click/a/a$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 2

    .line 218
    new-instance p1, Lcom/mbridge/msdk/foundation/entity/n;

    invoke-direct {p1}, Lcom/mbridge/msdk/foundation/entity/n;-><init>()V

    .line 219
    iget-object v0, p0, Lcom/mbridge/msdk/click/a/a$1;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/n;->d(Ljava/lang/String;)V

    .line 220
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/entity/n;->a(J)V

    const/4 v0, 0x0

    .line 221
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/n;->a(I)V

    const-string v0, "POST"

    .line 222
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/n;->c(Ljava/lang/String;)V

    .line 223
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/n;->b(Ljava/lang/String;)V

    .line 224
    iget-object v0, p0, Lcom/mbridge/msdk/click/a/a$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/entity/n;)J

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 213
    invoke-static {}, Lcom/mbridge/msdk/click/a/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
