.class public Lcom/qihoo360/replugin/utils/basic/RepluginLogData;
.super Ljava/lang/Object;
.source "RepluginLogData.java"

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field logList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field size:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getLogList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 21
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->logList:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getSize()I
    .locals 1

    .line 13
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->size:I

    return v0
.end method

.method public setLogList(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 25
    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->logList:Ljava/util/ArrayList;

    return-void
.end method

.method public setSize(I)V
    .locals 0

    .line 17
    iput p1, p0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->size:I

    return-void
.end method
