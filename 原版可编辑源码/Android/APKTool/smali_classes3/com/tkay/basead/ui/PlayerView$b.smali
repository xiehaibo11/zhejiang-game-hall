.class final Lcom/tkay/basead/ui/PlayerView$b;
.super Landroid/view/View$BaseSavedState;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/PlayerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/tkay/basead/ui/PlayerView$b;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field a:I

.field b:Z

.field c:Z

.field d:Z

.field e:Z

.field f:Z

.field g:Z

.field h:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 272
    new-instance v0, Lcom/tkay/basead/ui/PlayerView$b$1;

    invoke-direct {v0}, Lcom/tkay/basead/ui/PlayerView$b$1;-><init>()V

    sput-object v0, Lcom/tkay/basead/ui/PlayerView$b;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    .line 239
    invoke-direct {p0, p1}, Landroid/view/View$BaseSavedState;-><init>(Landroid/os/Parcel;)V

    .line 240
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->a:I

    const/4 v0, 0x7

    new-array v0, v0, [Z

    .line 242
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->readBooleanArray([Z)V

    const/4 p1, 0x0

    .line 243
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->b:Z

    const/4 p1, 0x1

    .line 244
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->c:Z

    const/4 p1, 0x2

    .line 245
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->d:Z

    const/4 p1, 0x3

    .line 246
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->e:Z

    const/4 p1, 0x4

    .line 247
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->f:Z

    const/4 p1, 0x5

    .line 248
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->g:Z

    const/4 p1, 0x6

    .line 249
    aget-boolean p1, v0, p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView$b;->h:Z

    return-void
.end method

.method public constructor <init>(Landroid/os/Parcelable;)V
    .locals 0

    .line 254
    invoke-direct {p0, p1}, Landroid/view/View$BaseSavedState;-><init>(Landroid/os/Parcelable;)V

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 2

    .line 286
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "SavedState(\nsavePosition - "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveVideoPlay25 - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->b:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveVideoPlay50 - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->c:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveVideoPlay75 - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->d:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveIsVideoStart - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->e:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveIsVideoPlayCompletion - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->f:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveIsMute - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->g:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\nsaveVideoNeedResumeByCdRate - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView$b;->h:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\n)"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 259
    invoke-super {p0, p1, p2}, Landroid/view/View$BaseSavedState;->writeToParcel(Landroid/os/Parcel;I)V

    .line 260
    iget p2, p0, Lcom/tkay/basead/ui/PlayerView$b;->a:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    const/4 p2, 0x7

    new-array p2, p2, [Z

    .line 262
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->b:Z

    const/4 v1, 0x0

    aput-boolean v0, p2, v1

    .line 263
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->c:Z

    const/4 v1, 0x1

    aput-boolean v0, p2, v1

    .line 264
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->d:Z

    const/4 v1, 0x2

    aput-boolean v0, p2, v1

    .line 265
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->e:Z

    const/4 v1, 0x3

    aput-boolean v0, p2, v1

    .line 266
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->f:Z

    const/4 v1, 0x4

    aput-boolean v0, p2, v1

    .line 267
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->g:Z

    const/4 v1, 0x5

    aput-boolean v0, p2, v1

    .line 268
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView$b;->h:Z

    const/4 v1, 0x6

    aput-boolean v0, p2, v1

    .line 269
    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeBooleanArray([Z)V

    return-void
.end method
