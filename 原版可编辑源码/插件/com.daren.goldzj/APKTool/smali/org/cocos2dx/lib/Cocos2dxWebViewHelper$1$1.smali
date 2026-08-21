.class Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1$1;
.super Landroid/webkit/WebChromeClient;
.source "Cocos2dxWebViewHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1$1;->this$0:Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onShowFileChooser(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/WebView;",
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;",
            "Landroid/webkit/WebChromeClient$FileChooserParams;",
            ")Z"
        }
    .end annotation

    .line 118
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p1

    iput-object p2, p1, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessageAboveL:Landroid/webkit/ValueCallback;

    .line 119
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p1

    invoke-virtual {p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->openImageChooserActivity()V

    const/4 p1, 0x1

    return p1
.end method

.method public openFileChooser(Landroid/webkit/ValueCallback;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;)V"
        }
    .end annotation

    .line 99
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object v0

    iput-object p1, v0, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    .line 100
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p1

    invoke-virtual {p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->openImageChooserActivity()V

    return-void
.end method

.method public openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;)V
    .locals 0

    .line 105
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p2

    iput-object p1, p2, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    .line 106
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p1

    invoke-virtual {p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->openImageChooserActivity()V

    return-void
.end method

.method public openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 110
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p3

    iput-object p1, p3, Lorg/cocos2dx/lib/Cocos2dxActivity;->uploadMessage:Landroid/webkit/ValueCallback;

    .line 111
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper;->access$000()Lorg/cocos2dx/lib/Cocos2dxActivity;

    move-result-object p3

    invoke-virtual {p3}, Lorg/cocos2dx/lib/Cocos2dxActivity;->openImageChooserActivity()V

    .line 112
    invoke-virtual {p0, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxWebViewHelper$1$1;->openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;)V

    return-void
.end method
