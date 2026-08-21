.class Lcom/bianfeng/addpermission/ui/ShowPolicyActivity$1;
.super Landroid/webkit/WebViewClient;
.source "ShowPolicyActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    .line 125
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
