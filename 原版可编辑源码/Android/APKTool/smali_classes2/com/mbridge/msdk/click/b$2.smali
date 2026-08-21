.class final Lcom/mbridge/msdk/click/b$2;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Z

.field final synthetic d:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V
    .locals 0

    .line 1989
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$2;->d:Lcom/mbridge/msdk/click/b;

    iput-object p2, p0, Lcom/mbridge/msdk/click/b$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/click/b$2;->b:Ljava/lang/String;

    iput-boolean p4, p0, Lcom/mbridge/msdk/click/b$2;->c:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 1991
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$2;->d:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$2;->b:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/b$2;->c:Z

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Z)V

    return-void
.end method
