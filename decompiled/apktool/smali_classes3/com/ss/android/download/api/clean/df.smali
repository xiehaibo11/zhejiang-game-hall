.class public Lcom/ss/android/download/api/clean/df;
.super Lcom/ss/android/download/api/clean/c;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/df;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field rg:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/download/api/clean/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 108
    new-instance v0, Lcom/ss/android/download/api/clean/df$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/df$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/df;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/c;-><init>()V

    .line 26
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 4

    .line 121
    invoke-direct {p0, p1}, Lcom/ss/android/download/api/clean/c;-><init>(Landroid/os/Parcel;)V

    .line 26
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    .line 122
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 124
    const-class v2, Lcom/ss/android/download/api/clean/c;

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v2

    check-cast v2, Lcom/ss/android/download/api/clean/c;

    .line 125
    iget-object v3, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 136
    invoke-super {p0, p1, p2}, Lcom/ss/android/download/api/clean/c;->writeToParcel(Landroid/os/Parcel;I)V

    .line 137
    iget-object p2, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    if-nez p2, :cond_0

    .line 138
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    .line 140
    :cond_0
    iget-object p2, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 141
    iget-object p2, p0, Lcom/ss/android/download/api/clean/df;->rg:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/clean/c;

    const/4 v1, 0x0

    .line 142
    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    goto :goto_0

    :cond_1
    return-void
.end method
