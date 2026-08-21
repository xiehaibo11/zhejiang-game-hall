.class public Lcom/ss/android/download/api/clean/CleanType;
.super Lcom/ss/android/download/api/clean/df;

# interfaces
.implements Landroid/os/Parcelable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/download/api/clean/CleanType$Type;
    }
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/download/api/clean/CleanType;",
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
            "Lcom/ss/android/download/api/clean/pt;",
            ">;"
        }
    .end annotation
.end field

.field private pp:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 152
    new-instance v0, Lcom/ss/android/download/api/clean/CleanType$1;

    invoke-direct {v0}, Lcom/ss/android/download/api/clean/CleanType$1;-><init>()V

    sput-object v0, Lcom/ss/android/download/api/clean/CleanType;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 59
    invoke-direct {p0}, Lcom/ss/android/download/api/clean/df;-><init>()V

    .line 44
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/CleanType;->c:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 5

    .line 122
    invoke-direct {p0, p1}, Lcom/ss/android/download/api/clean/df;-><init>(Landroid/os/Parcel;)V

    .line 44
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ss/android/download/api/clean/CleanType;->c:Ljava/util/Map;

    .line 123
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/download/api/clean/CleanType;->pp:I

    .line 125
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 127
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2

    .line 128
    const-class v3, Lcom/ss/android/download/api/clean/pt;

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {p1, v3}, Landroid/os/Parcel;->readParcelable(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;

    move-result-object v3

    check-cast v3, Lcom/ss/android/download/api/clean/pt;

    .line 129
    iget-object v4, p0, Lcom/ss/android/download/api/clean/CleanType;->c:Ljava/util/Map;

    invoke-interface {v4, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public getType()I
    .locals 1

    .line 48
    iget v0, p0, Lcom/ss/android/download/api/clean/CleanType;->pp:I

    return v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 135
    invoke-super {p0, p1, p2}, Lcom/ss/android/download/api/clean/df;->writeToParcel(Landroid/os/Parcel;I)V

    .line 136
    iget p2, p0, Lcom/ss/android/download/api/clean/CleanType;->pp:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 137
    iget-object p2, p0, Lcom/ss/android/download/api/clean/CleanType;->c:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->size()I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 139
    iget-object p2, p0, Lcom/ss/android/download/api/clean/CleanType;->c:Ljava/util/Map;

    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    .line 140
    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 142
    :try_start_0
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 143
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/download/api/clean/pt;

    .line 144
    invoke-virtual {p1, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 145
    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeParcelable(Landroid/os/Parcelable;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 147
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_0
    return-void
.end method
