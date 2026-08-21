.class public interface abstract Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Callback;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "Callback"
.end annotation


# virtual methods
.method public abstract onDnsResolved(Ljava/lang/String;Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/net/InetAddress;",
            ">;)V"
        }
    .end annotation
.end method
