.class final Lcom/mbridge/msdk/foundation/tools/g$2;
.super Ljava/lang/Object;
.source "DomainSameSDKTool.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/tools/g;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Z


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->b:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->c:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 299
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->b:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/foundation/tools/g$2;->c:Z

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/g;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    return-void
.end method
