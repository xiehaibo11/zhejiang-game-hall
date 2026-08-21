.class final Lcom/mbridge/msdk/click/b$5;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Z

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;ZZLcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 1130
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    iput-boolean p2, p0, Lcom/mbridge/msdk/click/b$5;->a:Z

    iput-boolean p3, p0, Lcom/mbridge/msdk/click/b$5;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/click/b$5;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1133
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$5;->a:Z

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->e(Lcom/mbridge/msdk/click/b;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->NATIVE_SHOW_LOADINGPAGER:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$5;->b:Z

    if-nez v0, :cond_0

    .line 1134
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$5;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1136
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$5;->a:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    if-eqz v0, :cond_1

    sget-boolean v0, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->e(Lcom/mbridge/msdk/click/b;)Z

    move-result v0

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->NATIVE_SHOW_LOADINGPAGER:Z

    if-eqz v0, :cond_1

    .line 1137
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$5;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$5;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onShowLoading(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_1
    return-void
.end method
