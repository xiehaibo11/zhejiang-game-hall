.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$19;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertCntCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IChunkCntCalculator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$aidlCntCalculator:Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;)V
    .locals 0

    .line 714
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$19;->val$aidlCntCalculator:Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public calculateChunkCount(J)I
    .locals 1

    .line 718
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$19;->val$aidlCntCalculator:Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;->calculateChunkCount(J)I

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 720
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method
