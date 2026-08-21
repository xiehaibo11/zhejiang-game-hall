.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/ILiveInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/openliveplugin/LivePluginHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "LiveInitCallbackWrapper"
.end annotation


# static fields
.field public static INSTANCE:Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 53
    new-instance v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;

    invoke-direct {v0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;-><init>()V

    sput-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;->INSTANCE:Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLiveInitFinish()V
    .locals 2

    .line 61
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->initLiveCommerce()V

    .line 62
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->access$000()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    if-eqz v1, :cond_0

    .line 64
    invoke-interface {v1}, Lcom/bytedance/android/live/base/api/ILiveInitCallback;->onLiveInitFinish()V

    goto :goto_0

    :cond_1
    return-void
.end method
