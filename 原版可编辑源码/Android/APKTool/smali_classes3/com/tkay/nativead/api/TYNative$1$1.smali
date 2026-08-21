.class final Lcom/tkay/nativead/api/TYNative$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/TYNative$1;->onAdLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/nativead/api/TYNative$1;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/TYNative$1;)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative$1$1;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative$1$1;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative$1;->this$0:Lcom/tkay/nativead/api/TYNative;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    if-eqz v0, :cond_0

    .line 80
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative$1$1;->this$1:Lcom/tkay/nativead/api/TYNative$1;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative$1;->this$0:Lcom/tkay/nativead/api/TYNative;

    iget-object v0, v0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    invoke-interface {v0}, Lcom/tkay/nativead/api/TYNativeNetworkListener;->onNativeAdLoaded()V

    :cond_0
    return-void
.end method
