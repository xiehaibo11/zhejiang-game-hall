.class final Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;
.super Ljava/lang/Object;
.source "MapCollections.java"

# interfaces
.implements Ljava/util/Iterator;
.implements Ljava/util/Map$Entry;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/utils/basic/MapCollections;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x10
    name = "MapIterator"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Iterator<",
        "Ljava/util/Map$Entry<",
        "TK;TV;>;>;",
        "Ljava/util/Map$Entry<",
        "TK;TV;>;"
    }
.end annotation


# instance fields
.field mEnd:I

.field mEntryValid:Z

.field mIndex:I

.field final synthetic this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;


# direct methods
.method constructor <init>(Lcom/qihoo360/replugin/utils/basic/MapCollections;)V
    .locals 1

    .line 77
    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 75
    iput-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    .line 78
    invoke-virtual {p1}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetSize()I

    move-result p1

    add-int/lit8 p1, p1, -0x1

    iput p1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEnd:I

    const/4 p1, -0x1

    .line 79
    iput p1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    .line 134
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_2

    .line 138
    instance-of v0, p1, Ljava/util/Map$Entry;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 141
    :cond_0
    check-cast p1, Ljava/util/Map$Entry;

    .line 142
    invoke-interface {p1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    iget-object v2, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    invoke-virtual {v2, v3, v1}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->equal(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 143
    invoke-interface {p1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p1

    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    invoke-virtual {v0, v3, v2}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->equal(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v1, v2

    :cond_1
    return v1

    .line 135
    :cond_2
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "This container does not support retaining Map.Entry objects"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public getKey()Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TK;"
        }
    .end annotation

    .line 107
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_0

    .line 111
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v0

    return-object v0

    .line 108
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "This container does not support retaining Map.Entry objects"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public getValue()Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TV;"
        }
    .end annotation

    .line 116
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_0

    .line 120
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v0

    return-object v0

    .line 117
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "This container does not support retaining Map.Entry objects"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public hasNext()Z
    .locals 2

    .line 84
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEnd:I

    if-ge v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public final hashCode()I
    .locals 5

    .line 148
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_2

    .line 152
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v0

    .line 153
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    const/4 v4, 0x1

    invoke-virtual {v1, v3, v4}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colGetEntry(II)Ljava/lang/Object;

    move-result-object v1

    if-nez v0, :cond_0

    move v0, v2

    goto :goto_0

    .line 154
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    :goto_0
    if-nez v1, :cond_1

    goto :goto_1

    .line 155
    :cond_1
    invoke-virtual {v1}, Ljava/lang/Object;->hashCode()I

    move-result v2

    :goto_1
    xor-int/2addr v0, v2

    return v0

    .line 149
    :cond_2
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "This container does not support retaining Map.Entry objects"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public bridge synthetic next()Ljava/lang/Object;
    .locals 1

    .line 72
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->next()Ljava/util/Map$Entry;

    move-result-object v0

    return-object v0
.end method

.method public next()Ljava/util/Map$Entry;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map$Entry<",
            "TK;TV;>;"
        }
    .end annotation

    .line 89
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    .line 90
    iput-boolean v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    return-object p0
.end method

.method public remove()V
    .locals 2

    .line 96
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_0

    .line 99
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colRemoveAt(I)V

    .line 100
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    .line 101
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEnd:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEnd:I

    const/4 v0, 0x0

    .line 102
    iput-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    return-void

    .line 97
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method public setValue(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TV;)TV;"
        }
    .end annotation

    .line 125
    iget-boolean v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mEntryValid:Z

    if-eqz v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->this$0:Lcom/qihoo360/replugin/utils/basic/MapCollections;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->mIndex:I

    invoke-virtual {v0, v1, p1}, Lcom/qihoo360/replugin/utils/basic/MapCollections;->colSetValue(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 126
    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "This container does not support retaining Map.Entry objects"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    .line 160
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/MapCollections$MapIterator;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
