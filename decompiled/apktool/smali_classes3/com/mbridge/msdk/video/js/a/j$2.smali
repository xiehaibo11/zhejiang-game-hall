.class final Lcom/mbridge/msdk/video/js/a/j$2;
.super Ljava/lang/Object;
.source "JSCommon.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/js/a/j;->a(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:I

.field final synthetic f:Lcom/mbridge/msdk/video/js/a/j;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/js/a/j;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 542
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j$2;->f:Lcom/mbridge/msdk/video/js/a/j;

    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/j$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/video/js/a/j$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/video/js/a/j$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/video/js/a/j$2;->d:Ljava/lang/String;

    iput p6, p0, Lcom/mbridge/msdk/video/js/a/j$2;->e:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 544
    new-instance v9, Lcom/mbridge/msdk/foundation/entity/p;

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j$2;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j$2;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/js/a/j$2;->c:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/video/js/a/j$2;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$2;->f:Lcom/mbridge/msdk/video/js/a/j;

    .line 546
    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->b(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    iget v7, p0, Lcom/mbridge/msdk/video/js/a/j$2;->e:I

    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$2;->f:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->c(Lcom/mbridge/msdk/video/js/a/j;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object v0

    iget v1, p0, Lcom/mbridge/msdk/video/js/a/j$2;->e:I

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object v8

    const-string v1, "2000039"

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    .line 547
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j$2;->f:Lcom/mbridge/msdk/video/js/a/j;

    invoke-static {v0}, Lcom/mbridge/msdk/video/js/a/j;->c(Lcom/mbridge/msdk/video/js/a/j;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    .line 548
    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J

    return-void
.end method
