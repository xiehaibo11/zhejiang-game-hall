.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$5;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->sortPlugin(Ljava/util/List;)Ljava/util/List;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/ymnsdk/replugin/entity/Plugin;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;)V
    .locals 0

    .line 524
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$5;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public compare(Lcom/ymnsdk/replugin/entity/Plugin;Lcom/ymnsdk/replugin/entity/Plugin;)I
    .locals 0

    .line 527
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update_priority()I

    move-result p1

    .line 528
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update_priority()I

    move-result p2

    sub-int/2addr p1, p2

    return p1
.end method

.method public bridge synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    .line 524
    check-cast p1, Lcom/ymnsdk/replugin/entity/Plugin;

    check-cast p2, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {p0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$5;->compare(Lcom/ymnsdk/replugin/entity/Plugin;Lcom/ymnsdk/replugin/entity/Plugin;)I

    move-result p1

    return p1
.end method
