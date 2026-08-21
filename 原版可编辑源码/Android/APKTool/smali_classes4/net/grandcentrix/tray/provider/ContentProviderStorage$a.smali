.class Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;
.super Landroid/os/HandlerThread;
.source "ContentProviderStorage.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/grandcentrix/tray/provider/ContentProviderStorage;->registerOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;


# direct methods
.method constructor <init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Ljava/lang/String;)V
    .locals 0
    .param p1, "this$0"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage;
    .param p2, "arg0"    # Ljava/lang/String;

    .line 294
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-direct {p0, p2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected onLooperPrepared()V
    .locals 4

    .line 297
    invoke-super {p0}, Landroid/os/HandlerThread;->onLooperPrepared()V

    .line 298
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    new-instance v1, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    new-instance v2, Landroid/os/Handler;

    invoke-virtual {p0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {v1, v0, v2}, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;-><init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Landroid/os/Handler;)V

    iput-object v1, v0, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserver:Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    .line 301
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->access$000(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Lnet/grandcentrix/tray/provider/TrayUri;

    move-result-object v0

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 302
    invoke-virtual {v1}, Lnet/grandcentrix/tray/core/TrayStorage;->getType()Lnet/grandcentrix/tray/core/TrayStorage$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    .line 303
    invoke-virtual {v1}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 304
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 305
    .local v0, "observingUri":Landroid/net/Uri;
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-static {v1}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->access$200(Lnet/grandcentrix/tray/provider/ContentProviderStorage;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    iget-object v2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    iget-object v2, v2, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->mObserver:Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    .line 306
    const/4 v3, 0x1

    invoke-virtual {v1, v0, v3, v2}, Landroid/content/ContentResolver;->registerContentObserver(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V

    .line 307
    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$a;->a:Lnet/grandcentrix/tray/provider/ContentProviderStorage;

    invoke-static {v1, v3}, Lnet/grandcentrix/tray/provider/ContentProviderStorage;->access$302(Lnet/grandcentrix/tray/provider/ContentProviderStorage;Z)Z

    .line 308
    return-void
.end method
