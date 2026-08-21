.class final Lcom/mbridge/msdk/click/b$7;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/out/Campaign;

.field final synthetic c:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;ZLcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    .line 1229
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$7;->c:Lcom/mbridge/msdk/click/b;

    iput-boolean p2, p0, Lcom/mbridge/msdk/click/b$7;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/click/b$7;->b:Lcom/mbridge/msdk/out/Campaign;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1232
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/b$7;->a:Z

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v0, :cond_0

    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->NATIVE_SHOW_LOADINGPAGER:Z

    if-eqz v0, :cond_0

    .line 1233
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$7;->c:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->g(Lcom/mbridge/msdk/click/b;)V

    .line 1235
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$7;->c:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    if-eqz v0, :cond_1

    sget-boolean v0, Lcom/mbridge/msdk/click/b;->a:Z

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->NATIVE_SHOW_LOADINGPAGER:Z

    if-eqz v0, :cond_1

    .line 1236
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$7;->c:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/b$7;->b:Lcom/mbridge/msdk/out/Campaign;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;->onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_1
    return-void
.end method
