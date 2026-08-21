.class Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;
.super Lcom/ss/android/socialbase/downloader/exception/BaseException;


# static fields
.field public static final ALREADY_APPLY_BY_OTHER:I = 0x1

.field public static final BAD_SEGMENT:I = 0x6

.field public static final CHANGE_SEGMENT:I = 0x5

.field public static final PREV_END_ADJUST_FAIL:I = 0x4

.field public static final PREV_OVERSTEP:I = 0x3

.field public static final SEGMENT_NOT_EXIST:I = 0x2


# instance fields
.field private applyCode:I


# direct methods
.method constructor <init>(ILjava/lang/String;)V
    .locals 2

    .line 45
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "applyCode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x430

    invoke-direct {p0, v0, p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    .line 46
    iput p1, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;->applyCode:I

    return-void
.end method


# virtual methods
.method public getSegmentApplyErrorCode()I
    .locals 1

    .line 50
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/SegmentApplyException;->applyCode:I

    return v0
.end method
