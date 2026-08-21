.class public Lcom/kwad/framework/filedownloader/message/h$f;
.super Lcom/kwad/framework/filedownloader/message/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/message/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "f"
.end annotation


# instance fields
.field private final adX:I

.field private final adY:I


# direct methods
.method constructor <init>(III)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/h;-><init>(I)V

    iput p2, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adY:I

    iput p3, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adX:I

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/h;-><init>(Landroid/os/Parcel;)V

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adY:I

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    iput p1, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adX:I

    return-void
.end method

.method constructor <init>(Lcom/kwad/framework/filedownloader/message/h$f;)V
    .locals 2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/h$f;->getId()I

    move-result v0

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/h$f;->uZ()I

    move-result v1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/message/h$f;->va()I

    move-result p1

    invoke-direct {p0, v0, v1, p1}, Lcom/kwad/framework/filedownloader/message/h$f;-><init>(III)V

    return-void
.end method


# virtual methods
.method public sX()B
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final uZ()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adY:I

    return v0
.end method

.method public final va()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adX:I

    return v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/framework/filedownloader/message/h;->writeToParcel(Landroid/os/Parcel;I)V

    iget p2, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adY:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    iget p2, p0, Lcom/kwad/framework/filedownloader/message/h$f;->adX:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method
