execute pathogen#infect()
runtime bundle/vim-pathogen/autoload/pathogen.vim
set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'gmarik/Vundle.vim'
Plugin 'tpope/vim-fugitive'
Plugin 'L9'
Plugin 'git://git.wincent.com/command-t.git'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
Plugin 'user/L9', {'name': 'newL9'}

""""""vim scripts""""""""""""""""""
 Bundle 'taglist.vim'
 Bundle 'c.vim'
 Bundle 'minibufexpl.vim'
 Bundle 'grep.vim'
 Bundle 'mru.vim'
 Bundle 'comments.vim'
     
""""""""git repo"""""""""""""""
 Bundle 'scrooloose/nerdtree'
 Bundle 'Valloric/YouCompleteMe'
 Bundle 'vim-scripts/AutoClose'
 Bundle 'scrooloose/syntastic'
 Bundle 'Lokaltog/vim-powerline' 
 Bundle 'kien/ctrlp.vim'
 Bundle 'Valloric/ListToggle'

call vundle#end()            " required
filetype plugin indent on    " required
