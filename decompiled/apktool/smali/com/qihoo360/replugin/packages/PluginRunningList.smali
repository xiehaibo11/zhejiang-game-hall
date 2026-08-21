.class public Lcom/qihoo360/replugin/packages/PluginRunningList;
.super Ljava/lang/Object;
.source "PluginRunningList.java"

# interfaces
.implements Landroid/os/Parcelable;
.implements Ljava/lang/Iterable;
.implements Ljava/lang/Cloneable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Landroid/os/Parcelable;",
        "Ljava/lang/Iterable<",
        "Ljava/lang/String;",
        ">;",
        "Ljava/lang/Cloneable;"
    }
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/qihoo360/replugin/packages/PluginRunningList;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final mList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mPid:I

.field mProcessName:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 142
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList$1;

    invoke-direct {v0}, Lcom/qihoo360/replugin/packages/PluginRunningList$1;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/packages/PluginRunningList;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 v0, -0x80000000

    .line 37
    iput v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    .line 40
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    return-void
.end method

.method private constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    .line 153
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 v0, -0x80000000

    .line 37
    iput v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    .line 154
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    .line 155
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    .line 156
    invoke-virtual {p1}, Landroid/os/Parcel;->readSerializable()Ljava/io/Serializable;

    move-result-object p1

    check-cast p1, Ljava/util/ArrayList;

    iput-object p1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    return-void
.end method

.method synthetic constructor <init>(Landroid/os/Parcel;Lcom/qihoo360/replugin/packages/PluginRunningList$1;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>(Landroid/os/Parcel;)V

    return-void
.end method

.method constructor <init>(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 v0, -0x80000000

    .line 37
    iput v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    .line 45
    iget-object v0, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    .line 46
    iget v0, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    iput v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    .line 47
    new-instance v0, Ljava/util/ArrayList;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->getList()Ljava/util/List;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method add(Ljava/lang/String;)V
    .locals 1

    .line 56
    monitor-enter p0

    .line 57
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 60
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method protected clone()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/CloneNotSupportedException;
        }
    .end annotation

    .line 127
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    return-object v0
.end method

.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_6

    .line 107
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_1

    .line 109
    :cond_1
    check-cast p1, Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 111
    iget v2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    iget v3, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    if-eq v2, v3, :cond_2

    return v1

    .line 112
    :cond_2
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    iget-object v3, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_3

    return v1

    .line 114
    :cond_3
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    iget-object p1, p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    if-eqz v2, :cond_4

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    goto :goto_0

    :cond_4
    if-nez p1, :cond_5

    goto :goto_0

    :cond_5
    move v0, v1

    :goto_0
    return v0

    :cond_6
    :goto_1
    return v1
.end method

.method getList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 73
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    return-object v0
.end method

.method hasRunning()Z
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public hashCode()I
    .locals 2

    .line 119
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x1f

    .line 120
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 121
    iget v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    add-int/2addr v0, v1

    return v0
.end method

.method isRunning(Ljava/lang/String;)Z
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public iterator()Ljava/util/Iterator;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Iterator<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 78
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    return-object v0
.end method

.method setProcessInfo(Ljava/lang/String;I)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    .line 52
    iput p2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 83
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PRunningL{ "

    .line 84
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 87
    iget v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    const/high16 v2, -0x80000000

    if-ne v1, v2, :cond_0

    const-string v1, "<UNKNOWN_PID>"

    .line 88
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    const/16 v1, 0x3c

    .line 90
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 91
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x3a

    .line 92
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 93
    iget v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "> "

    .line 94
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 98
    :goto_0
    iget-object v1, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " }"

    .line 99
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 101
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 137
    iget-object p2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 138
    iget p2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 139
    iget-object p2, p0, Lcom/qihoo360/replugin/packages/PluginRunningList;->mList:Ljava/util/ArrayList;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeSerializable(Ljava/io/Serializable;)V

    return-void
.end method
