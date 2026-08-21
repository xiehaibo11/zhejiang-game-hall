.class public Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;
.super Ljava/lang/Object;
.source "XmlTranslator.java"

# interfaces
.implements Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;


# instance fields
.field private isLastStartTag:Z

.field private namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

.field private sb:Ljava/lang/StringBuilder;

.field private shift:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 45
    iput v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->shift:I

    .line 50
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v1, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"

    .line 51
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 52
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-direct {v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    return-void
.end method

.method private appendShift(I)V
    .locals 3

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p1, :cond_0

    .line 130
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v2, "\t"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private onAttribute(Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;)V
    .locals 2

    .line 88
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 89
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getNamespace()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;->getPrefixViaUri(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    .line 91
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getNamespace()Ljava/lang/String;

    move-result-object v0

    :cond_0
    if-eqz v0, :cond_1

    .line 93
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 94
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x3a

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 96
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getValue()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/ext/parser/utils/xml/XmlEscaper;->escapeXml10(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 97
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0x3d

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 p1, 0x22

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 98
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    return-void
.end method


# virtual methods
.method public getXml()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onEndTag(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;)V
    .locals 2

    .line 103
    iget v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->shift:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->shift:I

    .line 104
    iget-boolean v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->isLastStartTag:Z

    if-eqz v1, :cond_0

    .line 105
    iget-object p1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v0, " />\n"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 107
    :cond_0
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->appendShift(I)V

    .line 108
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v1, "</"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 109
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;->getNamespace()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 110
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;->getNamespace()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 112
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 113
    iget-object p1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v0, ">\n"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    const/4 p1, 0x0

    .line 115
    iput-boolean p1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->isLastStartTag:Z

    return-void
.end method

.method public onNamespaceEnd(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;)V
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;->removeNamespace(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;)V

    return-void
.end method

.method public onNamespaceStart(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;)V
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;->addNamespace(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;)V

    return-void
.end method

.method public onStartTag(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;)V
    .locals 4

    .line 57
    iget-boolean v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->isLastStartTag:Z

    if-eqz v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v1, ">\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 60
    :cond_0
    iget v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->shift:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->shift:I

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->appendShift(I)V

    .line 61
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const/16 v1, 0x3c

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 62
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->getNamespace()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 63
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->getNamespace()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;->getPrefixViaUri(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, ":"

    if-eqz v0, :cond_1

    .line 65
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 67
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->getNamespace()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 70
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 72
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->namespaces:Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces;->consumeNameSpaces()Ljava/util/List;

    move-result-object v0

    .line 73
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    .line 74
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces$XmlNamespace;

    .line 75
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->sb:Ljava/lang/StringBuilder;

    const-string v3, " xmlns:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces$XmlNamespace;->getPrefix()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "=\""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 76
    invoke-virtual {v1}, Lcom/qihoo360/replugin/ext/parser/parser/XmlNamespaces$XmlNamespace;->getUri()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\""

    .line 77
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_3
    const/4 v0, 0x1

    .line 80
    iput-boolean v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->isLastStartTag:Z

    .line 82
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->getAttributes()Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->value()[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    move-result-object p1

    array-length v0, p1

    const/4 v1, 0x0

    :goto_2
    if-ge v1, v0, :cond_4

    aget-object v2, p1, v1

    .line 83
    invoke-direct {p0, v2}, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->onAttribute(Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_4
    return-void
.end method
