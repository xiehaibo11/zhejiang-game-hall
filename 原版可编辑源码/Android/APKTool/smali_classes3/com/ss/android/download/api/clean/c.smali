.class public Lcom/ss/android/download/api/clean/c;
.super Lcom/ss/android/download/api/clean/pp;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/c;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ss/android/download/api/clean/pp;",
            ">;"
        }
    .end annotation
.end field

.field private fw:Z

.field private pp:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/download/api/clean/pp;",
            ">;"
        }
    .end annotation
.end field

.field private rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 216
    new-instance v0, Lcom/ss/android/download/api/clean/c$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/c$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/c;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 48
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/pp;-><init>()V

    .line 30
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/c;->pp:Ljava/util/List;

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/c;->c:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 5

    .line 193
    invoke-direct {p0, p1}, Lcom/ss/android/download/api/clean/pp;-><init>(Landroid/os/Parcel;)V

    .line 30
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/c;->pp:Ljava/util/List;

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/c;->c:Ljava/util/Map;

    .line 194
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/clean/c;->rg:Ljava/lang/String;

    .line 195
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    iput-boolean v2, p0, Lcom/ss/android/download/api/clean/c;->fw:Z

    .line 197
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    :goto_1
    if-ge v1, v0, :cond_4

    .line 199
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2

    .line 200
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "apk_clean_file"

    .line 203
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 204
    const-class v3, Lcom/ss/android/download/api/clean/rg;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/ss/android/download/api/clean/pp;

    goto :goto_2

    :cond_1
    const-string v4, "clean_app_cache"

    .line 205
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 206
    const-class v3, Lcom/ss/android/download/api/clean/pt;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/ss/android/download/api/clean/pp;

    goto :goto_2

    :cond_2
    const-string v4, "clean_folder"

    .line 207
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 208
    const-class v3, Lcom/ss/android/download/api/clean/c;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/ss/android/download/api/clean/pp;

    goto :goto_2

    .line 210
    :cond_3
    const-class v3, Lcom/ss/android/download/api/clean/pp;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/ss/android/download/api/clean/pp;

    .line 212
    :goto_2
    iget-object v4, p0, Lcom/ss/android/download/api/clean/c;->c:Ljava/util/Map;

    invoke-interface {v4, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_4
    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public rg()Ljava/lang/String;
    .locals 1

    const-string v0, "clean_folder"

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 177
    invoke-super {p0, p1, p2}, Lcom/ss/android/download/api/clean/pp;->writeToParcel(Landroid/os/Parcel;I)V

    .line 178
    iget-object p2, p0, Lcom/ss/android/download/api/clean/c;->rg:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 179
    iget-boolean p2, p0, Lcom/ss/android/download/api/clean/c;->fw:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 181
    iget-object p2, p0, Lcom/ss/android/download/api/clean/c;->c:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->size()I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 183
    iget-object p2, p0, Lcom/ss/android/download/api/clean/c;->c:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 184
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 185
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/clean/pp;

    .line 186
    invoke-virtual {p1, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 187
    invoke-virtual {v0}, Lcom/ss/android/download/api/clean/pp;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 188
    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V

    goto :goto_0

    :cond_0
    return-void
.end method
