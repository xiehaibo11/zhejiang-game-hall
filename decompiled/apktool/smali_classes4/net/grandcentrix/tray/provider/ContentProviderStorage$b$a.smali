.class Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;
.super Ljava/lang/Object;
.source "ContentProviderStorage.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;->onChange(ZLandroid/net/Uri;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;

.field final synthetic b:Ljava/util/List;


# direct methods
.method constructor <init>(Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;Ljava/util/List;)V
    .locals 0
    .param p1, "this$1"    # Lnet/grandcentrix/tray/provider/ContentProviderStorage$b;

    .line 101
    iput-object p2, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;->a:Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;

    iput-object p3, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;->b:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 104
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;->a:Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/ContentProviderStorage$b$a;->b:Ljava/util/List;

    invoke-interface {v0, v1}, Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;->onTrayPreferenceChanged(Ljava/util/Collection;)V

    .line 105
    return-void
.end method
