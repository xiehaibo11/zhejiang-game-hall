.class final Lcom/mbridge/msdk/reward/b/a$3;
.super Lcom/mbridge/msdk/foundation/same/report/d/b;
.source "RewardReport.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Ljava/lang/String;)V
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

    .line 178
    iput-object p1, p0, Lcom/mbridge/msdk/reward/b/a$3;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/b/a$3;->b:Landroid/content/Context;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/report/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;)V
    .locals 3

    .line 187
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/n;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/n;-><init>()V

    .line 188
    iget-object v1, p0, Lcom/mbridge/msdk/reward/b/a$3;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/n;->d(Ljava/lang/String;)V

    .line 189
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/entity/n;->a(J)V

    const/4 v1, 0x0

    .line 190
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/n;->a(I)V

    const-string v1, "POST"

    .line 191
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/n;->c(Ljava/lang/String;)V

    .line 192
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/foundation/same/net/f/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/n;->b(Ljava/lang/String;)V

    .line 193
    iget-object v1, p0, Lcom/mbridge/msdk/reward/b/a$3;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/entity/n;)J

    .line 194
    invoke-static {}, Lcom/mbridge/msdk/reward/b/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 182
    invoke-static {}, Lcom/mbridge/msdk/reward/b/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
