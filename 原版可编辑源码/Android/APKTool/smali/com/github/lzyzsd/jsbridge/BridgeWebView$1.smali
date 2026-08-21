.class Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;
.super Ljava/lang/Object;
.source "BridgeWebView.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/CallBackFunction;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/github/lzyzsd/jsbridge/BridgeWebView;->flushMessageQueue()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method constructor <init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V
    .locals 0

    .line 167
    iput-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;->this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(Ljava/lang/String;)V
    .locals 5

    .line 174
    :try_start_0
    invoke-static {p1}, Lcom/github/lzyzsd/jsbridge/Message;->toArrayList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_5

    .line 179
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_4

    :cond_0
    const/4 v0, 0x0

    .line 182
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_5

    .line 183
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/github/lzyzsd/jsbridge/Message;

    .line 184
    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getResponseId()Ljava/lang/String;

    move-result-object v2

    .line 186
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 187
    iget-object v3, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;->this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v3, v3, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->responseCallbacks:Ljava/util/Map;

    invoke-interface {v3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/github/lzyzsd/jsbridge/CallBackFunction;

    .line 188
    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getResponseData()Ljava/lang/String;

    move-result-object v1

    .line 189
    invoke-interface {v3, v1}, Lcom/github/lzyzsd/jsbridge/CallBackFunction;->onCallBack(Ljava/lang/String;)V

    .line 190
    iget-object v1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;->this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v1, v1, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->responseCallbacks:Ljava/util/Map;

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    .line 194
    :cond_1
    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getCallbackId()Ljava/lang/String;

    move-result-object v2

    .line 195
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 196
    new-instance v3, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1$1;

    invoke-direct {v3, p0, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1$1;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;Ljava/lang/String;)V

    goto :goto_1

    .line 206
    :cond_2
    new-instance v3, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1$2;

    invoke-direct {v3, p0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1$2;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;)V

    .line 215
    :goto_1
    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getHandlerName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 216
    iget-object v2, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;->this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v2, v2, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->messageHandlers:Ljava/util/Map;

    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getHandlerName()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/github/lzyzsd/jsbridge/BridgeHandler;

    goto :goto_2

    .line 218
    :cond_3
    iget-object v2, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebView$1;->this$0:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v2, v2, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->defaultHandler:Lcom/github/lzyzsd/jsbridge/BridgeHandler;

    :goto_2
    if-eqz v2, :cond_4

    .line 221
    invoke-virtual {v1}, Lcom/github/lzyzsd/jsbridge/Message;->getData()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v1, v3}, Lcom/github/lzyzsd/jsbridge/BridgeHandler;->handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V

    :cond_4
    :goto_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_5
    :goto_4
    return-void

    :catch_0
    move-exception p1

    .line 176
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
