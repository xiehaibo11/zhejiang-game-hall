.class Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "BroadcastRecord"
.end annotation


# instance fields
.field final a:Landroid/content/Intent;

.field final b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Landroid/content/Intent;Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Intent;",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;->a:Landroid/content/Intent;

    iput-object p2, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;->b:Ljava/util/ArrayList;

    return-void
.end method
